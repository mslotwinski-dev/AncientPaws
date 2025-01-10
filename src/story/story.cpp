#include "story.hpp"

Story::Story(Game* game): log() { 
  chapter = 0;
  this->game = game;
}

void Story::Next() {
  Read();
  chapter++;
}

void Story::Read() {
  switch(chapter) {
    case 0: {
      log.PrintStory("W dawnych czasach zwierzątka");

      log.Notice((game->GetHeroes())[0]->GetName(), "A co to? Moneta? Oho... I to złota. Dziś mój szczęśliwy dzień.");
      log.PrintStory("Kapibara Jagoda była poszukiwaczką skarbów");
      break;
    }
  }
}