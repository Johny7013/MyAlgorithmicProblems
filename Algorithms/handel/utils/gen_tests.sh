#!/bin/bash

source "${MAKE_PATH}/utils/gen_tests_base.sh" # "includowanie" potrzebnych funkcji

#Podstawowe uzycie:
# Aby wygenerować test [id][nazwa].in, generatorką o nazwie gen_[gen].cpp, do 
# której przekazane są poza seedem (ziarnem generowania liczb pseudolosowych)
# argumenty [args] nalezy wykonac: make_test [id] [gen] [args]

# Np. Aby do zadania zad bez dodatkowych argumentów (z samym seedem) 
# wygenerować test zad1a.in generatorką gen_basic.cpp należy użyć polecenia: 
# make_test 1a basic

# Nie nalezy ruszać w tym skrypcie zmiennych SEED, seed, RESTRICT_TEST oraz
# GENERATED_TESTS

make_test 1a random 100
make_test 1b two 34
make_test 1c three 1000
make_test 1d four 2500
make_test 1e five 5000
make_test 2a random 5678
make_test 2b two 35620
make_test 2c three 34640
make_test 2d four 49800
make_test 2e five 50000
make_test 3a random 59800
make_test 3b two 64560
make_test 3c three 75000
make_test 3d four 90400
make_test 3e five 100000
make_test 4a random 100008
make_test 4b two 340000
make_test 4c three 468902
make_test 4d four 264342
make_test 4e five 500000
make_test 5a random 500688
make_test 5b two 678450
make_test 5c three 999678
make_test 5d four 1000000
make_test 5e five 1000000
