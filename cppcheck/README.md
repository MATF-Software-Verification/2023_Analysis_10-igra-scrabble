## Statička analiza alatom Cppcheck

U nastavku se nalazi uputstvo za pokretanje statičke analize koda alatom cppcheck.  
Više detalja o samom alatu kao i rezultatima statičke analize koda izabranog projekta možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripta koja pokreće alat je `cppcheck.sh` locirana u ovom folderu.

### Preduslovi pokretanja
Potrebno je, na mašini na kojoj se skripta pokreće, instalirati cppcheck alat.

```bash
sudo apt-get install cppcheck
```

### Pokretanje
Potrebno je pozicionirati se u folder `/cppcheck`.  
Sa te lokacije, nakon što podesite prava pristupa, pokrećete skriptu `cppcheck.sh` koja pokreće sam alat, sa predefinisanim argumentima.

```bash
cd memcheck

chmod +x cppcheck.sh

./cppcheck.sh
```
Ukolkiko nema grešaka u analizi, na terminalu će vam se prikazati poruka da je analiza završena uspešno.

Rezultat analize nalazi se u direktorijumu `/cppcheck` u `.txt` fajlu.
