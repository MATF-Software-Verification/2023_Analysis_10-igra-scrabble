#!/usr/bin/bash

set -xe

sudo perf record --call-graph dwarf ../Igra_scrabble/build/Igra_Scrabble
sudo perf report 
