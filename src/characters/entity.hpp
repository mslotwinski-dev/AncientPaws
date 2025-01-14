#pragma once
#include "../inc.hpp"

class Entity {
 protected:
  std::string name;
  double damage;
  double maxhealth;
  double defense;
  double speed;

  double health;

 public:
  Entity() {};
  virtual ~Entity() {};

  inline double GetHealth() { return health; };
  inline double GetDamage() { return damage; };
  inline double GetDefense() { return defense; };
  inline double GetSpeed() { return speed; };

  Entity* PickTarget(std::vector<Entity*>);

  double CalcDamage(Entity*);

  bool DealDmg(double);
  inline void Weakness(double weak) { this->damage -= weak; };
  void Heal(double);

  virtual std::string GetName() const = 0;
  virtual std::string Turn(std::vector<Entity*>, std::vector<Entity*>) = 0;
  virtual std::string HealthBar() = 0;
};
