#pragma once
#include "enemy.hpp"

class Monkey : public Enemy {
 public:
  Monkey(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~Monkey() {}

  void SkillA() override;
  void SkillB() override;
};

class MonkeyWarrior : public Monkey {
 public:
  MonkeyWarrior(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyWarrior() {}

  void SkillA() override;
  void SkillB() override;
};

class MonkeyHunter : public Monkey {
 public:
  MonkeyHunter(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyHunter() {}

  void SkillA() override;
  void SkillB() override;
};

class MonkeyBard : public Monkey {
 public:
  MonkeyBard(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyBard() {}

  void SkillA() override;
  void SkillB() override;
};

class MonkeyEngineer : public Monkey {
 public:
  MonkeyEngineer(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyEngineer() {}

  void SkillA() override;
  void SkillB() override;
};

class MonkeyGeneral : public Monkey {
 public:
  MonkeyGeneral(std::string = "Małpa", double = 14, double = 45, double = 0, double = 3);
  ~MonkeyGeneral() {}

  void SkillA() override;
  void SkillB() override;
};