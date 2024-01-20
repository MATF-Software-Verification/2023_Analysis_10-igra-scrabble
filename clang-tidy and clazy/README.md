## Statička analiza pomoću alata Clang-tidy

U nastavku se nalazi uputstvo za izvršavanje statičke analize izabranog projekta kao i snimci ekrana nekih od poruka dobijenih analizatorom Clang-Tidy u okviru okruženja QTCreator.  

Više detalja o samom alatu kao i rezultatima analize možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

### Preduslovi pokretanja

### Pokretanje

1. Otvorite Qt Creator:
Pokrenite Qt Creator i otvorite projekat.

2. Otvorite .cpp datoteke u kojima želite izvršiti clang-tidy analizu.

3. Idite na meni "Analyse" u glavnom meniju:
Kliknite na "Analyze" u glavnom meniju Qt Creatora.

4. Izaberite "Clang-Tidy and Clazy.." iz padajućeg menija:
        
5. Pokrenite Clang-Tidy analizu:
       
6. Prikaz rezultata:
Rezultati analize će biti prikazani u "Diagnostic" prozoru u Qt Creatoru, omogućavajući vam pregled pronađenih problema.

7. Klikom na stavke u rezultatima analize, možete automatski preći na odgovarajući deo koda u odabranim .cpp datotekama.

https://github.com/microsoft/vscode-cpptools/issues/9574