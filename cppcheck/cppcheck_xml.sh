#!/usr/bin/bash

echo "Pokrecem cppcheck staticku analizu..."

cppcheck --quiet --enable=all --suppress=missingInclude --force --output-file=output.xml --xml  ../Igra_scrabble

if [ $? -eq 0 ]; then

    echo "Cppcheck analiza uspesno zavrsena!"
    echo "Generise se HTML izvestaj..."

    cppcheck-htmlreport --file=output.xml --report-dir=report

    if [ $? -eq 0 ]; then
        echo "HTML izvestaj je generisan, otvorite report/index.html fajl"
    else
        echo "Greska pri generisanju HTML izvestaja."
    fi
else
    echo "Greska pri statickoj analizi."
fi
