#pragma once
#include "../../inc.hpp"
#include "log.hpp"

int Validate(std::vector<std::string>);

template <typename... Args>
int Pick(Args... args) {
  std::vector<std::string> a{([](const auto& value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
  }(args))...};

  return Validate(a);
}

inline int Pick(std::vector<std::string> a) { return Validate(a); }
