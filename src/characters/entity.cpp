#include "entity.hpp"

Entity* EntityPickTarget(std::vector<Entity*> targets) {
  if (targets.empty()) {
    return nullptr;
  }

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, targets.size() - 1);

  int randomIndex = dis(gen);

  return targets[randomIndex];
}

bool Entity::DealDmg(double dmg) {
  this->health -= dmg;
  return this->health < 0;
}