#include "./game.hpp"
#include "../story/story.hpp" 

Game::Game() {
  story = new Story(this); 
  heros.push_back(new Cappybara());

  // heros.push_back(new Armadillo());
  // heros.push_back(new Hedgehog());
}

Game::~Game() {
  delete story;  
  for (auto hero : heros) {
    delete hero;  
  }
}

void Game::Start() {
  story->Next();
}