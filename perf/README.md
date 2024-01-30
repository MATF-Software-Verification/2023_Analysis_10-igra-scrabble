## Perf profajler

U nastavku se nalazi uputstvo za pokretanje Perf profajliranja.  
Više detalja o samom profajleru kao i rezultatima profajliranja izabranog projekta možete naći u [ProjectAnalysisReport.md](../ProjectAnalysisReport.md) dokumentu.

Skripta koja pokreće profajliranje je `perf.sh`.

### Preduslovi pokretanja
Za profajliranje potrebno je, na mašini na kojoj se skripta pokreće, instalirati Perf alat.  
Za pokretanje FlameGraph-a koristićemo dodati submodul (https://github.com/brendangregg/FlameGraph.git) i skriptu `flame_graph.sh`

```bash
sudo apt-get install linux-tools-$(uname -r)
```
Ova komanda instalira linux-tools paket za trenutnu verziju jezgra ($(uname -r)), što takođe uključuje i alat Perf.

### Pokretanje
Nakon kloniranja repozitorijuma potrebno je pozicionirati se u folder `/perf`.
Sa te lokacije, nakon što podesite prava pristupa, prvo pokrećete skriptu `build_perf.sh` koja će izgraditi projekat u `DEBUG` režimu, a zatim skriptu `perf.sh` koja pokreće sam alat.  
Ukoliko smo zadovoljni rezultatom analize možemo pokrenuti `flame_graph.sh` koja pravi "*plameni graf*" i prikazuje ga u Firefox pregledaču.  

```bash
cd perf

chmod +x build_perf.sh
chmod +x perf.sh
chmod +x flame_graph.sh
chmod +x clean_perf.sh

./build_perf.sh

./perf.sh
./flame_graph.sh

./clean_perf.sh
```
Perf se može koristiti za profilisanje uzimanjem uzorka (*sampling*) na nivou niti, procesa ili CPU kroz komande `record`, `report` i `annotate`. Profili će podrazumevao biti sačuvani u fajlu `perf.data` i mogu biti analizirani koristeći komande `report` i `annotate`. Upravo ćemo ovu funkcionalnost iskoristiti u našoj analizi.

Za vizuelizaciju podataka dobijenih naredbom `perf report` koristićemo gore pomenuti "*plameni graf*".

Na kraju pokrećemo skriptu `clean_perf.sh` koja će ukloniti sve nepotrebne fajlove.  
