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

  double _damage = CalcDamage(bad[target]);

  std::string result = GetName() + " dwoma precyzyjnymi cięciami zadaje " + bad[target]->GetName() + " " +
                       std::to_string(static_cast<int>(std::round(_damage))) + " punktów obrażeń";

  if (bad[target]->DealDmg(_damage)) {
    result += " zabijając przeciwnika";
  }

  return result;
}

std::string Cappybara::SkillB(std::vector<Entity *> good, std::vector<Entity *> bad) {
  int target = 0;
  if (bad.size() > 1) {
    std::vector<std::string> badnames;
    for (auto i : bad) {
      badnames.push_back(i->GetName());
    }
    target = Pick(badnames) - 1;
  }

  double _damage = CalcDamage(bad[target]) / 2;
  double _weakness = this->damage / 10;

  std::string result = GetName() + " tropikalną falą zadaje " + bad[target]->GetName() + " " +
                       std::to_string(static_cast<int>(std::round(_damage))) + " punktów obrażeń";

  if (bad[target]->DealDmg(_damage)) {
    result += " zabijając przeciwnika";
  } else {
    bad[target]->Weakness(_weakness);
    result += " osłabiając atak przeciwnika o " + std::to_string(static_cast<int>(std::round(_weakness))) + " punktów";
  }

  return result;
}

std::string Cappybara::SkillC(std::vector<Entity *> good, std::vector<Entity *> bad) {
  double _healing = 7.5 * this->maxhealth / 100;

  for (auto a : good) {
    a->Heal(_healing);
  }

  std::string result = GetName() + " robi wesoły plusk przywracając sobie i sojusznikom " +
                       std::to_string(static_cast<int>(std::round(_healing))) + " punktów zdrowia i stresu";
  return result;
}
