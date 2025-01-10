#pragma once 
#include "../entity.hpp"

class Hero : public Entity {
  protected:
  double maxstamina;
  double maxmental;

  double stamina;
  double mental;

  public: 

  Hero(std::string, double , double, double, double);
  virtual ~Hero() {}

  virtual void SkillA() = 0;
  virtual void SkillB() = 0;
  virtual void SkillC() = 0;

  void Sleep();
};

class Cappybara : public Hero {
  public:

  Cappybara(std::string = "Jagoda", double = 18, double = 125, double = 10, double = 10);
  ~Cappybara() {}

  void SkillA() override;
  void SkillB() override;
  void SkillC() override;

  std::string GetName() const override;
};

class Armadillo : public Hero {
  public:

  Armadillo(std::string = "Rufi", double = 15, double = 125, double = 22, double = 7);
  ~Armadillo() {}

  void SkillA() override;
  void SkillB() override;
  void SkillC() override;

  std::string GetName() const override;
};

class Hedgehog : public Hero {
  
  public:
  Hedgehog(std::string = "Tytus", double = 12, double = 80, double = 3, double = 4);
  ~Hedgehog() {}

  void SkillA() override;
  void SkillB() override;
  void SkillC() override;

  std::string GetName() const override;
};


