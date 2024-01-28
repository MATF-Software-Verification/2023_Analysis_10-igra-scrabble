#!/usr/bin/bash

set -xe

sudo perf record --call-graph dwarf ../Igra_scrabble/build/Igra_Scrabble

echo "Generise se izvestaj ..."
sudo perf report 
