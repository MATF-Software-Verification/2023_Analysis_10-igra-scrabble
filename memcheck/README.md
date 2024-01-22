## Memcheck profajler

U nastavku se nalazi uputstvo za pokretanje Memcheck profajliranja.  
Više detalja o samom profajleru kao i rezultatima profajliranja izabranog projekta možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripta koja pokreće alat je `memcheck.sh`.

### Preduslovi pokretanja
Za profajliranje potrebno je, na mašini na kojoj se skripta pokreće, instalirati Qtframework, alat QtCreator, kao i Valgrind alat.

```bash
sudo apt-get update
sudo apt install build-essential
sudo apt-get install qt5-default
sudo apt-get install libfontconfig1
sudo apt-get qtcreator

sudo apt-get install valgrind
```

### Pokretanje
Potrebno je pozicionirati se u folder `/memcheck`.  
Sa te lokacije, nakon što podesite prava pristupa, prvo pokrećete skriptu `build_memcheck.sh` koja će izgraditi projekat, a zatim skriptu `memcheck.sh` koja pokreće sam alat. Kada smo odradili sve potrebne analize, pokrećemo skriptu `clean_memcheck.sh` koja će ukloniti sve nepotrebne fajlove.

```bash
cd memcheck

chmod +x build_memcheck.sh
chmod +x memcheck.sh
chmod +x clean_memcheck.sh

./build_memcheck
./memcheck.sh

...

./clean_memcheck.sh
```
Skripte ce izvršiti build projekta u `DEBUG` režimu i pokrenuće memcheck alat nad izvršnom datotekom koja je prethodno kreirana. 

Rezultat profajliranja nalazi se u direktorijumu `/memcheck` u `.out` fajlu.
