## Memcheck profajler

U nastavku se nalazi uputstvo za pokretanje Memcheck profajliranja.  
Više detalja o samom profajleru kao i rezultatima profajliranja izabranog projekta možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripta koja pokreće alat je `memcheck.sh`.

### Preduslovi pokretanja
Za profajliranje potrebno je, na mašini na kojoj se skripta pokreće, instalirati Valgrind alat.

```bash
sudo apt-get install valgrind
```

### Pokretanje
Potrebno je pozicionirati se u folder `/memcheck`.  
Sa te lokacije, nakon što podesite prava pristupa, prvo pokrećete skriptu `build_memcheck.sh` koja će izgraditi projekat, a zatim skriptu `memcheck.sh` koja pokreće sam alat.   
Alat pokrećemo sa dodatnim opcijama: 
- --show-leak-kinds=all - prikaz svih vrsta curenja memorije
- --leak-check=full - potpuno praćenje svih vrsta curenja memorije kao i mesta alokacije memorije
- --undef-value-errors=yes - prikazivanje grešaka koje se odnose na upotrebu neinicijalizovane vrednosti
-  --log-file="" - postavlja ime datoteke u kojoj će se sačuvati izveštaj


Ukoliko smo zadovoljni rezultatima analize, pokrećemo skriptu `clean_memcheck.sh` koja će ukloniti sve nepotrebne fajlove.

```bash
cd memcheck

chmod +x build_memcheck.sh
chmod +x memcheck.sh
chmod +x clean_memcheck.sh

./build_memcheck.sh
./memcheck.sh

...

./clean_memcheck.sh
```
Skripte ce izvršiti build projekta u `DEBUG` režimu i pokrenuće memcheck alat nad izvršnom datotekom koja je prethodno kreirana. 

Rezultat profajliranja nalazi se u direktorijumu `/memcheck` u `.out` fajlu.
