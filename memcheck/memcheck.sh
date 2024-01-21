#!/usr/bin/bash

echo "Pokrecem memcheck analizu..."

valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --undef-value-errors=yes --log-file="memcheck_$RANDOM.out" ../Igra_scrabble/build/Igra_Scrabble

# Ispis poruke o završetku analize
echo "Memcheck analiza uspesno zavrsena. Rezultati su dostupni u .out fajlu"
