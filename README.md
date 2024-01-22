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

Projekat je rađen u programskom jeziku **C++** u `QtCreator` radnom okruženju.


## Osnovne informacije o analizi
[GitHub repozitorijum projekta](https://gitlab.com/matf-bg-ac-rs/course-rs/projects-2022-2023/10-igra-scrabble)  
[Commit sha](2d80586a9b3383277c02b6218fe8b26b54aab6ed)  

Sama analiza biće izvršena nad **main** granom. 
 
U analizi su koršćeni sledeći alati:

- Alati za statičku analizu:
    - Clang-Tidy
    - Cppcheck
- Valgrind alati:
    - Memcheck
    - Cachegrind
- Perf

Detaljniji opis svakog alata nalazi se u dokumentu [ProjectAnalysisReport.md](ProjectAnalysisReport.md).

## Uputstvo za reprodukciju analize
Alati će biti pokrenuti iz terminala koristeći unapred pripremljene skripte, kao i direktno iz `QtCreator` okruženja.  
Postupak pokretanja alata može se naći u `README.md` fajlovima u okviru foldera posvećenom svakom korišćenom alatu. 

## Zaključci
Detaljniji opis zaključaka nakon analize svakim od alata nalazi se u dokumentu [ProjectAnalysisReport.md](ProjectAnalysisReport.md).