#!/bin/bash

echo "Pokrecem cppcheck staticku analizu..."

cppcheck --quiet --enable=all --suppress=missingInclude --output-file="cppcheck_$RANDOM.txt" ../Igra_scrabble

if [ $? -eq 0 ]; then
    echo "Analiza je uspesno zavrsena!"
else
    echo "Greska: Cppcheck analiza nije uspela."
fi
