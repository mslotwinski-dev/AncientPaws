#include "../characters/enemy/enemy.hpp"
#include "../characters/entity.hpp"
#include "../characters/hero/hero.hpp"
#include "../inc.hpp"

class Fight {
  std::vector<Entity *> entities;
  void Turn();
  void SortSpeed();
  void Kill();
  bool Run();

 public:
  Fight(std::vector<Hero *>, std::vector<Enemy *>);
  ~Fight();
};