#include "hero.hpp"

Cappybara::Cappybara(std::string name, double damage, double maxhealth, double defense, double speed)
    : Hero(name, damage, maxhealth, defense, speed) {}

std::string Cappybara::GetName() const { return "Kapibara " + name; };

std::vector<std::string> Cappybara::GetSkillList() {
  std::vector<std::string> a;

  a.push_back("Precyzyjne cięcia");
  a.push_back("Tropikalna fala");
  a.push_back("Wesoły plusk");
  return a;
}

std::string Cappybara::SkillA(std::vector<Entity *> good, std::vector<Entity *> bad) {
  int target = 0;
  if (bad.size() > 1) {
    std::vector<std::string> badnames;
    for (auto i : bad) {
      badnames.push_back(i->GetName());
    }
    target = Pick(badnames) - 1;
  }

  double CalcDamage = this->damage - bad[target]->GetDefense();

  std::string result = GetName() + " zadaje " + bad[target]->GetName() + " " +
                       std::to_string(static_cast<int>(std::round(CalcDamage))) + " punktów obrażeń";

  if (bad[target]->DealDmg(CalcDamage)) {
    result += " zabijając przeciwnika";
  }

  return result;
}

std::string Cappybara::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) { return "B"; }

std::string Cappybara::SkillC(std::vector<Entity *> good, std::vector<Entity *> bad) { return "C"; }
