#!/usr/bin/bash

set -xe

sudo perf record -F 99 -a -g -- sleep 20
sudo perf report
sudo perf script -i perf.data > perf.txt


# #perf record --call-graph dwarf ../Igra_scrabble/build/Igra_Scrabble


# sudo perf record -F 99 -a -g -- ../Igra_scrabble/build/Igra_Scrabble
# #sudo perf script > out.perf


# sudo perf script -i perf.data > perf.folded

# cd FlameGraph
# ./stackcollapse-perf.pl < ../perf.folded > ../perf.collapsed
# ./flamegraph.pl ../perf.collapsed > ../flamegraph.svg

# #./stackcollapse-perf.pl out.perf > out.folded
# # ./stackcollapse-perf.pl ../out.perf > ../out.folded
# # ./flamegraph.pl out.kern_folded > ../kernel.svg

# # 

# # # perf record -F 99 -a -g -- sleep 60

# # # perf record --call-graph dwarf -F 99 -g -p $pid -- sleep 20

# # # # perf record --call-graph dwarf ../VisuAlgo/visuAlgo/build/visuAlgo
# # # perf script -i perf.data > perf.folded

# # # cd FlameGraph
# # ./stackcollapse-perf.pl < ../perf.folded > ../perf.collapsed
# # ./flamegraph.pl ../perf.collapsed > ../flamegraph.svg

