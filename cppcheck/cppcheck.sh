#!/usr/bin/bash

echo "Pokrecem cppcheck staticku analizu..."

## Run Cppcheck on the source code
cppcheck --quiet --enable=all --suppress=missingInclude --output-file="cppcheck_$RANDOM.txt"  ../Igra_scrabble

echo "Analiza zavrsena!"



