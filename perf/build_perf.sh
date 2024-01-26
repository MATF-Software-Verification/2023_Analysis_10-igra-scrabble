#!/usr/bin/bash

QMAKE=/usr/lib/qt5/bin/qmake

set -xe

mkdir -p ../Igra_scrabble/build && cd ../Igra_scrabble/build
${QMAKE} -spec linux-g++ CONFIG+=debug ../Igra_Scrabble.pro > /dev/null

make -j12 > /dev/null
cd ../../perf