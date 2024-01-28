#!/bin/bash

cd FlameGraph

sudo perf script -i ../perf.data | ./stackcollapse-perf.pl | ./flamegraph.pl > ../perf-kernel.svg

firefox ../perf-kernel.svg

# cd FlameGraph
# ./stackcollapse-perf.pl < ../perf.folded > ../perf.collapsed
# ./flamegraph.pl ../perf.collapsed > ../flamegraph.svg
# cd ..