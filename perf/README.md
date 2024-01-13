## Perf profajler

U nastavku se nalazi uputstvo za pokretanje Perf profajliranja.  
Više detalja o samom profajleru kao i rezultatima profajliranja izabranog projekta možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripta koja pokreće alat je `perf.sh`.

### Preduslovi pokretanja
Za profajliranje potrebno je, na mašini na kojoj se skripta pokreće, instalirati Qt framework, alat Qt Creator, kao i Perf alat.  

```bash
sudo apt-get update
sudo apt install build-essential
sudo apt install qtcreator

sudo apt-get install valgrind
sudo apt-get install kcachegrind
```


### Pokretanje
Nakon kloniranja repozitorijuma potrebno je pozicionirati se u folder `/perf`.  
Sa te lokacije možete pokrenuti skriptu. Pre pokretanja skripte, potrebno je podesiti prava pristupa.

```bash
cd perf
chmod +x perf.sh
./perf.sh
```
Skripta ce izvršiti build projekta u `DEBUG` režimu i pokrenuće memcheck alat nad izvršnom datotekom koja je prethodno kreirana. 

Izlaz alata nalazi se u direktorijumu `/callgrind`. u  `.out` fajlovima.
Ukoliko pokrenete skriptu sa -k opcijom, pokrenuće se KCachegrind konzola.