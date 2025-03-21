#pragma once
#include "../../inc.hpp"

enum Colors { NONE, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, ORANGE, LIGHT };

class Log {
  int lines;
  bool dev = false;

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

  inline void ClearChar() { std::cout << "\b \b"; }

  void Wait();
  void ClearOne();
  void Reset();

  static std::string Color(Colors);
};
