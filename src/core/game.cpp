#include "./game.hpp"

#include "../story/story.hpp"

Game::Game() : log() {
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

std::vector<std::string> Game::GetNames() {
  std::vector<std::string> names;
  std::transform(heros.begin(), heros.end(), std::back_inserter(names), [](Hero* hero) { return hero->GetName(); });
  return names;
}

std::string Game::GetNames(int i) { return GetNames()[i]; }

bool Game::Start() {
  story->Next();
  story->Next();

  return true;
}