# Analiza projekta 'Igra scrabble'

GitHub repozitorijum posvećen izradi samostalnog praktičnog seminarskog rada za potrebe kursa Verifikacija softvera na master studijama Matematičkog fakulteta u Beogradu. Praktični seminarski rad podrazumeva primenu alata za statičku i dinamičku verifikaciju softvera na izabranom studentskom projektu.  
**Autor: Sara Živković 1071/2023**

## Opis analiziranog projekta
**Igra Scrabble** je studentski projekat rađen na kursu Razvoj softvera u školskoj 2022/2023 godini.  
Ova igra predstavlja implementaciju vrlo popularne igre Scrabble. Cilj je osvojiti poene postavljanjem pločica koje označavaju slova na kvadratnu tablu; pločice moraju formirati reči iz nekog unapred prihvaćenog rečnika.  
Igra se završava u nekom od sledećih scenarija:

1. Jedan igrač je odigrao sva slova iz svoje ruke i nijedno nije ostalo u njegovoj "vreći", nezavisno od drugog igrača.
2. Najmanje šest poteza bez promene rezultata, i neki od igrača odluči da se igra završi.
3. Neki od igrača premaši ograničeno vreme za potez.

Na kraju, od rezultata se oduzima suma vrednosti neiskorišćenih slova igrača.  

Projekat je rađen u programskom jeziku **C++** u QT radnom okruženju.


## Osnovne informacije o analizi
[GitHub repozitorijum projekta](https://gitlab.com/matf-bg-ac-rs/course-rs/projects-2022-2023/10-igra-scrabble)  
[Commit sha](2d80586a9b3383277c02b6218fe8b26b54aab6ed)  
Sama analiza biće izvršena nad **main** granom.  
U analizi koršćeni su sledeći alati:
- Valgrind alati:
    - Memcheck
    - Cachegrind
- Clang-Tidy i Clazy
- Perf

Detaljniji opis svakog alata kao i dobijeni zaključci nalaze se u fajlu ProjectAnalysisReport.md 

## Uputstvo za reprodukciju analize
Alati će biti pokrenuti iz terminala kao i direktno iz QtCreator okruženja. Postupak pokretanja svakog od alata može se naći u README.md fajlu u okviru foldera posvećenog konkretnom alatu. 

## Zaključci