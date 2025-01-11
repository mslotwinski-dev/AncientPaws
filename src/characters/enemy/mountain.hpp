#pragma once
#include "enemy.hpp"

class Puma : public Enemy {
 public:
  Puma(std::string, double, double, double, double);
  ~Puma() {}

  void SkillA() override;
  void SkillB() override;
};

class Fox : public Enemy {
 public:
  Fox(std::string, double, double, double, double);
  ~Fox() {}

  void SkillA() override;
  void SkillB() override;
};

class Bear : public Enemy {
 public:
  Bear(std::string, double, double, double, double);
  ~Bear() {}

  void SkillA() override;
  void SkillB() override;
};