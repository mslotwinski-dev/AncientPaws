#pragma once
#include "enemy.hpp"

class Puma : public Enemy {
 public:
  Puma(std::string, double, double, double, double);
  ~Puma() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Fox : public Enemy {
 public:
  Fox(std::string, double, double, double, double);
  ~Fox() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Bear : public Enemy {
 public:
  Bear(std::string, double, double, double, double);
  ~Bear() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};