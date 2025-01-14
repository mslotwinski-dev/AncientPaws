#include "hero.hpp"

Hero::Hero(std::string name, double damage, double maxhealth, double defense, double speed) {
  this->name = name;
  this->damage = damage;
  this->defense = defense;
  this->speed = speed;

  this->maxhealth = maxhealth;
  this->maxstamina = 100;
  this->maxmental = 100;

  this->health = maxhealth;
  this->mental = maxmental;
  this->stamina = maxstamina;
}

std::string Hero::Sleep() {
  this->stamina = std::min(this->stamina + maxstamina / 2, maxstamina);
  std::string result = GetName() + " zasypia przywracając sobie połowę punktów wytrzymałości";

  return result;
}

std::string Hero::Turn(std::vector<Entity*> good, std::vector<Entity*> bad) {
  std::vector<std::string> a = GetSkillList();
  a.push_back("Niezachwiane spanko");
  int pick = Pick(a);
  switch (pick) {
    case 1: {
      return SkillA(good, bad);
    }
    case 2: {
      return SkillB(good, bad);
    }
    case 3: {
      return SkillC(good, bad);
    }
    case 4: {
      return Sleep();
    }
    default: {
      return "Błąd podczas używania umiejętności " + GetName();
    }
  }
}

std::string Hero::HealthBar() {
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