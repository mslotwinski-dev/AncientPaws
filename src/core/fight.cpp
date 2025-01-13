#include "fight.hpp"

#include "../app.hpp"

Fight::Fight(std::vector<Hero *> heroes, std::vector<Enemy *> enemies, App *app) : log() {
  this->app = app;
  for (auto *hero : heroes) {
    this->entities.push_back(hero);
    this->heroes.push_back(hero);
  }

  for (auto *enemy : enemies) {
    this->entities.push_back(enemy);
    this->enemies.push_back(enemy);
  }

  std::sort(
      this->entities.begin(), this->entities.end(), [](Entity *a, Entity *b) { return a->GetSpeed() > b->GetSpeed(); });

  Run();
}

Fight::~Fight() {
  for (auto *entity : entities) {
    delete entity;
  }
}

void Fight::Run() {
  while (true) {
    for (auto it = entities.begin(); it != entities.end();) {
      Visualize();

      if (enemies.empty()) {
        return;
      }

      if (*it != nullptr) {
        log.Print((*it)->Turn(heroes, enemies));
      }

      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
      log.Clear();

      if (Kill()) {
        it = entities.begin();
        continue;
      }

      ++it;
    }

    if (enemies.empty()) {
      break;
    }
  }
}

bool Fight::Kill() {
  bool erased = false;

  auto enemyIt = enemies.begin();
  while (enemyIt != enemies.end()) {
    if ((*enemyIt)->GetHealth() <= 0) {
      erased = true;

      auto entityToRemove = *enemyIt;
      entities.erase(std::remove(entities.begin(), entities.end(), entityToRemove), entities.end());

      delete entityToRemove;
      enemyIt = enemies.erase(enemyIt);
    } else {
      ++enemyIt;
    }
  }

  auto heroIt = heroes.begin();
  while (heroIt != heroes.end()) {
    if ((*heroIt)->GetHealth() <= 0) {
      log.Clear();
      log.Print("Przegrałeś...");
      log.Press();
      app->Finish();
    } else {
      ++heroIt;
    }
  }

  return erased;
}

void Fight::Visualize() {
  for (auto i : heroes) {
    std::cout << std::setw(20) << std::left << i->GetName();
    log.Instant(i->HealthBar());
  }

  log.Instant("");

  for (auto i : enemies) {
    std::cout << std::setw(20) << std::left << i->GetName();
    log.Instant(i->HealthBar());
  }

  log.Instant("");
}