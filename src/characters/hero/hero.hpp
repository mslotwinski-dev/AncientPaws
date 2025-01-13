#pragma once
#include "../../functions/basic.hpp"
#include "../entity.hpp"

class Hero : public Entity {
 protected:
  double maxstamina;
  double maxmental;

  double stamina;
  double mental;

 public:
  Hero(std::string, double, double, double, double);
  virtual ~Hero() {}

  virtual std::vector<std::string> GetSkillList() = 0;

  virtual std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) = 0;
  virtual std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) = 0;
  virtual std::string SkillC(std::vector<Entity *>, std::vector<Entity *>) = 0;

  std::string Sleep();

  std::string Turn(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string HealthBar() override;
};

class Cappybara : public Hero {
 public:
  Cappybara(std::string = "Jagoda", double = 18, double = 125, double = 10, double = 10);
  ~Cappybara() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillC(std::vector<Entity *>, std::vector<Entity *>) override;

  std::vector<std::string> GetSkillList() override;

  std::string GetName() const override;
};

class Armadillo : public Hero {
 public:
  Armadillo(std::string = "Rufi", double = 15, double = 125, double = 22, double = 7);
  ~Armadillo() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillC(std::vector<Entity *>, std::vector<Entity *>) override;

  std::vector<std::string> GetSkillList() override;

  std::string GetName() const override;
};

class Hedgehog : public Hero {
 public:
  Hedgehog(std::string = "Tytus", double = 12, double = 80, double = 3, double = 4);
  ~Hedgehog() {}

  std::string SkillA(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillB(std::vector<Entity *>, std::vector<Entity *>) override;
  std::string SkillC(std::vector<Entity *>, std::vector<Entity *>) override;

  std::vector<std::string> GetSkillList() override;

  std::string GetName() const override;
};
