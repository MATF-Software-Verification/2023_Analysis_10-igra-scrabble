#!/usr/bin/bash

QMAKE=/usr/lib/qt5/bin/qmake

mkdir -p ../Igra_scrabble/build && cd ../Igra_scrabble/build
${QMAKE} CONFIG+=debug ../Igra_Scrabble.pro > /dev/null

make > /dev/null
cd ../../cachegrind

# mkdir -p ../VisuAlgo/visuAlgo/build && cd ../VisuAlgo/visuAlgo/build
# ${QMAKE} "CONFIG+=debug -O0 --keep-debuginfo=yes -fno-omit-frame-pointer" ../visuAlgo.pro > /dev/null
# make > /dev/null
# cd ../../../cachegrind

valgrind --tool=cachegrind --keep-debuginfo=yes --cache-sim=yes --log-file="cachegrind-%p.txt" ../Igra_scrabble/build/Igra_Scrabble

latest_file=$(ls -t cachegrind.out.* | head -n1)
cg_annotate "$latest_file" > "$latest_file.txt"

rm -rf ../Igra_scrabble/build