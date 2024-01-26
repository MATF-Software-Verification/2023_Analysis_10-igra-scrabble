#!/bin/bash

cd FlameGraph
sudo perf record -F 99 -ag -- sleep 60


sudo perf script | ./stackcollapse-perf.pl | ./flamegraph.pl > ../perf-kernel.svg

firefox perf-kernel.svg