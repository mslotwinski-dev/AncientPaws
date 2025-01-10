#pragma once
#include "../inc.hpp"
#include "../core/game.hpp"
#include "../functions/basic.hpp"

class Game;

class Story {
  int chapter;
  Log log;

  Game* game;  

public:
  Story(Game* game); 
  ~Story() {}

  void Next();

  void Read();
};