#include "enemy.hpp"

Enemy::Enemy(std::string name, double damage, double maxhealth, double defense, double speed) {
  this->name = name;
  this->damage = damage;
  this->defense = defense;
  this->speed = speed;

  this->maxhealth = maxhealth;

  this->health = maxhealth;
}

std::string Enemy::TryEscape() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::bernoulli_distribution distrib(0.5);

  bool failed = distrib(gen);

  if (failed) {
    return name + " podejmuje nieudaną próbę ucieczki";
  } else {
    this->health = -2137;
    return name + " podejmuje udaną próbę ucieczki";
  }

  return "Błąd podczas używania systemu ucieczki " + name;
}

std::string Enemy::Turn(std::vector<Entity*> good, std::vector<Entity*> bad) {
  int pick;

  if (100 * health / maxhealth < 15) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<> distrib({45, 45, 10});

    pick = distrib(gen) + 1;

  } else {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 2);

    pick = distrib(gen);
  }

  switch (pick) {
    case 1: {
      return SkillA(good, bad);
      break;
    }
    case 2: {
      return SkillB(good, bad);
      break;
    }
    case 3: {
      return TryEscape();
    }
    default: {
      return "Błąd podczas używania umiejętności " + name;
    }
  }
}

std::string Enemy::HealthBar() {
  int filledSquares = std::round((health / maxhealth) * 20);
  int emptySquares = 20 - filledSquares;

  std::string healthBar;

  for (int i = 0; i < filledSquares; ++i) {
    healthBar += "■";
  }

  for (int i = 0; i < emptySquares; ++i) {
    healthBar += "□";
  }

  return healthBar + " (" + std::to_string(std::round((1000 * health / maxhealth) / 10)).substr(0, 5) + "%)";
}