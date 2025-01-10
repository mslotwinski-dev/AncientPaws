#pragma once

#include "inc.hpp"
#include "core/game.hpp"
#include "functions/basic.hpp"

class App {
  Game game;
  Log log;

  public:
  
  App();
  ~App() {}

  void Start();
  void Play();
  void Menu();
  void Author();

};