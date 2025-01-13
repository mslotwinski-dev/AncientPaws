#pragma once
#include "../entity.hpp"

class Enemy : public Entity {
 public:
  Enemy(std::string, double, double, double, double);
  virtual ~Enemy() {}

  virtual std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) = 0;
  virtual std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) = 0;
  std::string TryEscape();

  std::string Turn(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string HealthBar() override;

  inline std::string GetName() const override { return name; }
};
