## Statička analiza pomoću alata Clang-tidy

U nastavku se nalazi uputstvo za izvršavanje statičke analize izabranog projekta kao i snimci ekrana nekih od poruka dobijenih analizatorom Clang-Tidy u okviru okruženja QTCreator.  

Više detalja o samom alatu kao i rezultatima analize možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

### Preduslovi pokretanja
Za pokretanje analize potrebno je, instalirati Qt framework, osnovne pakete i alate za razvoj, kao i alat Qt Creator.

```bash
sudo apt-get update
sudo apt install build-essential
sudo apt install qtcreator
```
Potrebno je instalirati odgovarajuću verziju clang alata (clang-format-14) https://github.com/microsoft/vscode-cpptools/issues/9574.

```bash
wget https://apt.llvm.org/llvm.sh
chmod +x llvm.sh
sudo ./llvm.sh 14
sudo apt install clang-format-14
```

### Pokretanje

1. Otvorite Qt Creator:
Pokrenite Qt Creator, otvorite i pokrenite projekat.

2. U fajlu IgraScrabble.pro dodajte narednu liniju koda (tek nakon što ste pokrenuli projekat):

```bash
INCLUDEPATH += /usr/lib/llvm-14/lib/clang/14.0.6/include
```
3. Otvorite .cpp datoteke u kojima želite izvršiti clang-tidy analizu.

4. Idite na meni "Tools" -> "Options" -> "Analyzer". Izabraćemo "Diagnostic Configuration: Clang-Tidy thorough checks[built in]" opciju, kopirajte je i uključite ili isključite opcije za analizu koje želite. U našem slučaju, isključena je opcija predloga za modernizaciju, a uključena je opcija za statičku analizu.

3. Idite na meni "Analyse" u glavnom meniju:
Kliknite na "Analyze" u glavnom meniju Qt Creatora.

4. Izaberite "Clang-Tidy and Clazy.." iz padajućeg menija:
        
5. Pokrenite Clang-Tidy analizu
       
6. Prikaz rezultata:
Rezultati analize će biti prikazani u "Diagnostic" prozoru u Qt Creatoru, omogućavajući vam pregled pronađenih problema.

7. Klikom na stavke u rezultatima analize, možete automatski preći na odgovarajući deo koda u odabranim .cpp datotekama. Alat takođe nudi i predloge rešenja pojedinih nađenih problema. 

