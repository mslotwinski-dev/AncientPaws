#include "./game.hpp"

#include "../app.hpp"
#include "../story/story.hpp"

Game::Game() : log() {
  story = new Story(this);
  heroes.push_back(new Cappybara());

  // heroes.push_back(new Armadillo());
  // heroes.push_back(new Hedgehog());
}

Game::~Game() {
  delete story;
  delete app;
  for (auto hero : heroes) {
    delete hero;
  }
}

std::vector<std::string> Game::GetNames() {
  std::vector<std::string> names;
  std::transform(heroes.begin(), heroes.end(), std::back_inserter(names), [](Hero* hero) { return hero->GetName(); });
  return names;
}

std::string Game::GetNames(int i) { return GetNames()[i]; }

void Game::Start() {
  std::vector<Enemy*> enemies;

  story->Next();

  enemies.push_back(new Monkey());
  enemies.push_back(new Monkey());

  Fight fight(heroes, enemies, app);

  story->Next();

  app->Finish();
}