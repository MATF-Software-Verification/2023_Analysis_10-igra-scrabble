#!/usr/bin/bash

QMAKE=/usr/lib/qt5/bin/qmake

mkdir -p ../Igra_scrabble/build && cd ../Igra_scrabble/build
${QMAKE} CONFIG+=debug ../Igra_Scrabble.pro > /dev/null

make > /dev/null
cd ../../memcheck

#find ../Igra_scrabble/build -type f -executable

valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all  --log-file="$(date +%s).memcheck.out" ../Igra_scrabble/build/Igra_Scrabble

#rm -rf ../Igra_scrabble/build
