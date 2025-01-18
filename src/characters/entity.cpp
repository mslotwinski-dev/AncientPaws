#include "entity.hpp"

Entity* Entity::PickTarget(std::vector<Entity*> targets) {
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

double Entity::CalcDamage(Entity* target) { return std::max((this->damage - target->GetDefense()), 2.0); }

void Entity::Heal(double h) { this->health = std::min(this->health + h, this->maxhealth); }

std::string Entity::ParseHeal(double v) {
  return Log::Color(GREEN) + std::to_string(static_cast<int>(std::round(v))) + Log::Color(NONE);
}

std::string Entity::ParseDamage(double v) {
  return Log::Color(RED) + std::to_string(static_cast<int>(std::round(v))) + Log::Color(NONE);
}

std::string Entity::ParseBuff(double v) {
  return Log::Color(CYAN) + std::to_string(static_cast<int>(std::round(v))) + Log::Color(NONE);
}

std::string Entity::ParseDebuff(double v) {
  return Log::Color(LIGHT) + std::to_string(static_cast<int>(std::round(v))) + Log::Color(NONE);
}
