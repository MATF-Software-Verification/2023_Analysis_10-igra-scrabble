# Analiza projekta 'Igra scrabble'

GitHub repozitorijum posvećen analizi odabranog projeketa u okviru kursa Verifikacija softvera.  
**Autor: Sara Živković 1071/2023**

## Opis analiziranog projekta
**Igra Scrabble** je studentski projekat rađen na kursu Razvoj softvera u školskoj 2022/2023 godini.  
Ova igra predstavlja implementaciju vrlo popularne igre Scrabble. Cilj je osvojiti poene postavljanjem pločica koje označavaju slova na kvadratnu tablu; pločice moraju formirati reči iz nekog unapred prihvaćenog rečnika. Igra se završava u nekom od sledećih scenarija:

1. Jedan igrač je odigrao sva slova iz svoje ruke i nijedno nije ostalo u njegovoj "vreći", nezavisno od drugog igrača.
2. Najmanje šest poteza bez promene rezultata, i neki od igrača odluči da se igra završi.
3. Neki od igrača premaši ograničeno vreme za potez.

Na kraju, od rezultata se oduzima suma vrednosti neiskorišćenih slova igrača. 
Projekat je rađen u programskom jeziku **C++** u QT radnom okruženju.