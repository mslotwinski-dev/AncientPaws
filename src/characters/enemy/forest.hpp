#pragma once
#include "enemy.hpp"

class Anteater : public Enemy {
 public:
  Anteater(std::string, double, double, double, double);
  ~Anteater() {}

  void SkillA() override;
  void SkillB() override;
};

class Harpy : public Enemy {
 public:
  Harpy(std::string, double, double, double, double);
  ~Harpy() {}

  void SkillA() override;
  void SkillB() override;
};

class Hawk : public Enemy {
 public:
  Hawk(std::string, double, double, double, double);
  ~Hawk() {}

  void SkillA() override;
  void SkillB() override;
};

class Weasel : public Enemy {
  Weasel(std::string, double, double, double, double);
  ~Weasel() {}

  void SkillA() override;
  void SkillB() override;
};

class Snake : public Enemy {
  Snake(std::string, double, double, double, double);
  ~Snake() {}

  void SkillA() override;
  void SkillB() override;
};

class Cayman : public Enemy {
  Cayman(std::string, double, double, double, double);
  ~Cayman() {}

  void SkillA() override;
  void SkillB() override;
};