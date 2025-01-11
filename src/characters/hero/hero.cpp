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

void Hero::Sleep() {}
