#pragma once
#include "enemy.hpp"

class Shark : public Enemy {
 public:
  Shark(std::string, double, double, double, double);
  ~Shark() {}

  void SkillA() override;
  void SkillB() override;
};

class Squid : public Enemy {
 public:
  Squid(std::string, double, double, double, double);
  ~Squid() {}

  void SkillA() override;
  void SkillB() override;
};

class Whale : public Enemy {
 public:
  Whale(std::string, double, double, double, double);
  ~Whale() {}

  void SkillA() override;
  void SkillB() override;
};