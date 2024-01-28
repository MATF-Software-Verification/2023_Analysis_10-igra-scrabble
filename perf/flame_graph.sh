#!/bin/bash

cd FlameGraph

sudo perf script -i ../perf.data | ./stackcollapse-perf.pl | ./flamegraph.pl > ../perf-kernel.svg

firefox ../perf-kernel.svg
