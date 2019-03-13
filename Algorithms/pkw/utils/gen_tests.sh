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

make_test 1a one 10 1000000000
make_test 1b two 10 1000000000
make_test 2a one 100 1000000000
make_test 2b two 100 1000000000
make_test 3a one 1000 1000000000
make_test 3b two 1000 1000000000
make_test 4a one 10000 1000000000
make_test 4b two 10000 1000000000
make_test 5a one 100000 1000000000
make_test 5b two 100000 1000000000
make_test 6a one 200000 1000000000000
make_test 6b two 200000 1000000000000
make_test 7a one 300000 1000000000000
make_test 7b two 300000 1000000000000
make_test 8a one 500000 1000000000000
make_test 8b two 500000 1000000000000
make_test 9a one 700000 1000000000000
make_test 9b two 700000 1000000000000
make_test 10a one 1000000 1000000000000
make_test 10b two 1000000 100000000000


