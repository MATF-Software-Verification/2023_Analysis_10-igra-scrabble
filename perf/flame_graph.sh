#!/bin/bash

set -xe

cd FlameGraph

sudo perf script -i ../perf.data | ./stackcollapse-perf.pl | ./flamegraph.pl > ../perf-kernel.svg

echo "Prikazujem Flame Graph u Firefox-u"

firefox ../perf-kernel.svg
