#pragma once
#include "enemy.hpp"

class Shark : public Enemy {
 public:
  Shark(std::string, double, double, double, double);
  ~Shark() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Squid : public Enemy {
 public:
  Squid(std::string, double, double, double, double);
  ~Squid() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};

class Whale : public Enemy {
 public:
  Whale(std::string, double, double, double, double);
  ~Whale() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
};