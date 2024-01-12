#!/usr/bin/bash

chmod +x "$0"

QMAKE=/usr/bin/qmake

mkdir -p ../Igra_scrabble/build && cd ../Igra_scrabble/build
${QMAKE} CONFIG+=debug ../visuAlgo.pro > /dev/null

make > /dev/null
cd ../../../memcheck

#valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all  --log-file="$(date +%s).memcheck.out" ../Igra_scrabble/build/Igra_scrabble

#rm -rf ../Igra_scrabble/build
