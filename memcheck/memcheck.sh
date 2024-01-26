#!/usr/bin/bash

set -e

echo "Pokrecem memcheck analizu..."

valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --undef-value-errors=yes --log-file="memcheck_$(date +%s).out" ../Igra_scrabble/build/Igra_Scrabble

# Ispis poruke o završetku analize
echo "Memcheck analiza uspesno zavrsena. Rezultati su dostupni u .out fajlu"
