#pragma once
#include "../../inc.hpp"

enum Colors { NONE, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN };

class Log {
  int lines;

 public:
  Log() { lines = 0; }
  ~Log() {}

  void Print(std::string, Colors = NONE);
  void PrintN(int, std::string);
  void Notice(std::string, std::string, Colors = YELLOW);
  void Instant(std::string, Colors = NONE);

  void Clear(int = 0);
  void Press(int = 0);

  void PrintStory(std::string);

  void ClearChar() { std::cout << "\b \b"; }

  void Wait();

  void Reset();

  std::string Color(Colors);
};
