#include "story.hpp"

Story::Story(Game* game) : log() {
  chapter = 0;
  this->game = game;
}

void Story::Next() {
  Read();
  chapter++;
  log.Press(1);
}

void Story::Read() {
  switch (chapter) {
    case 0: {
      log.Notice("Rozdział 1", "Prolog (Wschodnia Brazylia)", RED);

      log.PrintStory("W dawnych czasach świat skrywał dla zwierząt wiele tajemnic.");

      log.PrintStory(
          "W gęstwinach dżungli, w cieniu wysokich gór, kryły się ich wioski, studnie i "
          "starożytne świątynie pozostawione po sobie przez ludzi...");

      log.PrintStory(
          "Jedna z nich była szczególnie tajemnicza. Ludzie mówili o niej jako o miejscu, gdzie każdy skarb ma swoją "
          "cenę, a każdy krok prowadzi ku nieznanemu.");

      log.Notice(game->GetNames(0), "A co to? Moneta? Oho... I to złota. Dziś mój szczęśliwy dzień.");

      log.PrintStory(
          "Kapibara Jagoda była poszukiwaczką skarbów. Niespecjalnie bystra, ale ciekawska i bardzo zwinna.");

      log.PrintStory(
          "Jagoda znalazła monetę, która zdawała się starożytna. Miała na niej symbol, którego nigdy wcześniej nie "
          "widziała – spiralę otoczoną "
          "dziwnymi znakami.");

      log.Notice(game->GetNames(0),
                 "To nie wygląda jak zwykły pieniądz... Ale kto by się tym przejmował, to na pewno coś wartościowego!");

      log.PrintStory(
          "Z dala od wioski, gdzie mieszkała, słyszała opowieści o ukrytych w górach świątyniach. Mówiło się, że "
          "prowadzi do niej ścieżka pełna "
          "niebezpieczeństw.");

      log.PrintStory(
          "Odkąd była mała marzyła, aby do któreś się udać. Kochała te długie legendy o skarbach jakie się tam "
          "znajdują i pozwoliłyby jej do końca życia zatracić się w ulubionej czynności - spaniu.");

      log.PrintStory("Kapibara bez dłuższego namysłu wzięła monetę i wróciła do wioski.");

      log.Press(-1);

      log.PrintStory(
          "Idąc do domu usłyszała szelest liści. Dość nieregularny. Kapibary mają dobry słuch i coś tu nie grało. Jak "
          "gdyby była śledzona...");

      log.PrintStory("Nie czekając na atak dobyła miecza.");

      log.Notice(game->GetNames(0), "Pokaż się! Słyszę cię!");

      log.PrintStory("Ale nikt jej nie odpowiedział...");

      log.Notice(game->GetNames(0), "Przyszedłeś mi zabrać skarby?");

      log.PrintStory(
          "Kapibara podeszła pod podejrzany krak. Ostrożnie stawiając kroki wychyliła głowę, a tam... Jaszczurka.");

      log.Notice(game->GetNames(0), "No dobra, fałszywy alarm.");

      log.PrintStory(
          "Gdy to powiedziała przed uchem przeleciał jej kamyk. Czyli jednak nie taki falszywy, chociaż nie tam, gdzie "
          "szukała.");

      log.PrintStory("Z zarośli wyszła małpa, która trzymała w ręku włócznię, a następnie druga z... Bananem.");

      log.PrintStory("Małpy nie czekały chwili tylko rzuciły się na kapibarę..");

      break;
    }
    case 1: {
      log.Notice("Rozdział 1", "Początki (Wschodnia Brazylia)", RED);

      log.PrintStory("Było ciężko");

      log.Press(-1);

      log.PrintStory("Ale się udało!");

      break;
    }
  }
  // log.PrintStory("Z plecakiem pełnym jedzenia i nadzieją w sercu wyruszyła na wyprawę.");
}