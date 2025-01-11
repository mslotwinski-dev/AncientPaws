#pragma once
#include "../entity.hpp"

class Enemy : public Entity {
 public:
  Enemy(std::string, double, double, double, double);
  virtual ~Enemy() {}

  virtual void SkillA() = 0;
  virtual void SkillB() = 0;

  std::string GetName() const override { return name; }
};
