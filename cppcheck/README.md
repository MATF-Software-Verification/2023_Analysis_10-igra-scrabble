## Statička analiza alatom Cppcheck

U nastavku se nalazi uputstvo za pokretanje statičke analize koda alatom cppcheck.  
Više detalja o samom alatu kao i rezultatima statičke analize koda izabranog projekta možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripte koje pokreću analizu su `cppcheck.sh` i `cppcheck_xml.sh` locirane u ovom folderu.

### Preduslovi pokretanja
Potrebno je, na mašini na kojoj se skripta pokreće, instalirati cppcheck alat.

```bash
sudo apt-get install cppcheck
```

### Pokretanje
Potrebno je pozicionirati se u folder `/cppcheck`.  
Sa te lokacije, nakon što podesite prava pristupa, pokrećete jednu od dve skripte.

```bash
cd cppcheck

chmod +x cppcheck.sh
chmod +x cppcheck_xml.sh

./cppcheck.sh
./cppcheck_xml.sh
```
Skripta `cppcheck.sh` pokreće alat.  
Dodatne opcije koje su korišćene prilikom pokretanja samog alata:  
  -   --quiet - alat ne daje nikakv dodatni ispis za vreme rada
  -   --enable=all - uključuju se sve dostupne provere
  -   --suppress=missingInclude - ignorišu se greske koje se dobijaju iz header-a (kako bi se izbegao problem sa proveravanjem eksternih biblioteka koje se uključuju u header fajlovima)

Rezultat analize nalazi se u direktorijumu `/cppcheck` u `.txt` fajlu.

Druga skripta `cppcheck_xml.sh`, pored cppcheck analize koja beleži svoj rezultat u xml formatu, sadrži pokretanje alata cppcheck-htmlreport. To je alat koji generiše HTML izveštaj na temelju izlaza cppcheck analize. Time olakšava vizualni pregled pronađenih problema.  

Kada skripta uspešno završi sa radom, otvara se generisan HTML fajl (`report/index.html`) u Firefox web pregledaču radi vizualnog prikaza rezultata.


