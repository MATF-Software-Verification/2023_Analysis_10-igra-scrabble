#!/usr/bin/bash

QMAKE=/usr/lib/qt5/bin/qmake

set -x

mkdir -p ../Igra_scrabble/build && cd ../Igra_scrabble/build
${QMAKE} CONFIG+=debug ../Igra_Scrabble.pro > /dev/null

make > /dev/null
cd ../../memcheck

valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --undef-value-errors=yes --log-file="memcheck_$RANDOM.out" ../Igra_scrabble/build/Igra_Scrabble

# Ispis poruke o završetku analize
echo "Memcheck analiza uspesno zavrsena. Rezultati su dostupni u .out fajlu"

rm -rf ../Igra_scrabble/build

#find ../Igra_scrabble/build -type f -executable
#$RANDOM generates a random number
