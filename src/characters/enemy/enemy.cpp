#include "enemy.hpp"

Enemy::Enemy(std::string name, double damage, double maxhealth, double defense, double speed) {
  this->name = name;
  this->damage = damage;
  this->defense = defense;
  this->speed = speed;

  this->maxhealth = maxhealth;

  this->health = maxhealth;
}