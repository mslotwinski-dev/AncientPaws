#pragma once 
#include "../inc.hpp"
#include "../characters/hero/hero.hpp"

// Wstępna deklaracja klasy Story
class Story;

class Game {
  std::vector<Hero*> heros;
  Story* story;  // Używamy wskaźnika, aby unikać cyklicznej zależności

public:
  Game();
  ~Game();

  void Start();
  std::vector<Hero*> GetHeroes() { return heros; }
};