#pragma once
#include "../inc.hpp"

// #include "enemy/enemy.hpp"
// #include "enemy/hero/hero.hpp"
// #include "enemy/npc/npc.hpp"

class Entity {
 protected:
  std::string name;
  double damage;
  double maxhealth;
  double defense;
  double speed;

  double health;

 public:
  Entity() {};
  virtual ~Entity() {};

  virtual std::string GetName() const = 0;
};
