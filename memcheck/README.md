## Memcheck profajler

U nastavku se nalazi uputstvo za pokretanje Memcheck profajliranje.  
Više detalja o samom profajleru kao i rezultatima profajliranja izabranog projekta možete nači u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripta koja pokreće alat je `memcheck.sh`.

### Preduslovi pokretanja
Za profajliranje potrebno je, na mašini na kojoj se skripta pokreće, instalirati Qt framework, alat Qt Creator. kao i Valgrind alat.

```bash
sudo apt-get update
sudo apt install build-essential
sudo apt install qtcreator

sudo apt-get install valgrind
```


### Pokretanje
Nakon kloniranja repozitorijuma potrebno je pozicionirati se u folder `/memcheck`.  
Sa te lokacije možete pokrenuti skriptu bez ijednog argumenta, nakon što podesite prava pristupa.

```bash
cd memcheck
chmod +x memcheck.sh
./memcheck.sh
```
Skripta ce izvršiti build projekta u `DEBUG` režimu i pokrenuće memcheck alat nad izvršnom datotekom. 

Izlaz alata nalazi se u direktorikumu `/memcheck` (kao i skripta) u `.out` fajlu.
