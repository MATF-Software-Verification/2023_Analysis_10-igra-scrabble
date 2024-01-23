## Callgrind profajler

U nastavku se nalazi uputstvo za pokretanje Callgrind profajliranja.  
Više detalja o samom profajleru kao i rezultatima profajliranja izabranog projekta možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripta koja pokreće alat je `callgrind.sh`.

### Preduslovi pokretanja
Za profajliranje potrebno je, na mašini na kojoj se skripta pokreće, instalirati Valgrind i KCacheGrind alate.  

```bash
sudo apt-get install valgrind
sudo apt-get install kcachegrind
```
### Pokretanje
Nakon kloniranja repozitorijuma potrebno je pozicionirati se u folder `/callgrind`.  
Sa te lokacije najpre pokrećemo skriptu za izgradnju projekta `build_callgrind.sh`.   
Ukoliko je ona uspešno izvršena, pokrećemo skriptu `callgrind.sh` koja radi profajliranje. Kada pokrećete skriptu, možete koristiti opcije `-a` za omogućavanje `callgrind_annotate` i `-k` za omogućavanje KCacheGrind vizualizacije.  
Kada smo zadovoljni rezultatima, pokrećemo skriptu `clean_callgrind.sh` koja će ukloniti sve nepotrebne fajlove.
Pre pokretanja skripte, potrebno je podesiti prava pristupa svim skriptama.

```bash
cd callgrind

chmod +x build_callgrind.sh
chmod +x callgrind.sh
chmod +x clean_callgrind.sh

./build_callgrind.sh
./callgrind.sh [-a] [-k]

...

./clean_callgrind.sh
```
Skripta ce izvršiti build projekta u `DEBUG` režimu i pokrenuće memcheck alat nad izvršnom datotekom koja je prethodno kreirana. 

Izlaz alata nalazi se u direktorijumu `/callgrind`. u  `.out` fajlovima.
Ukoliko pokrenete skriptu sa -k opcijom, pokrenuće se KCachegrind konzola.
U folderu `KCacheGrind/` su neki od snimaka ekrana konzole.