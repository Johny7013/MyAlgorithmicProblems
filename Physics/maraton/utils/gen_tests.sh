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

make_test 1 basic 10
make_test 2 basic 50
make_test 3 basic 100
make_test 4 basic 500
make_test 5 basic 1000
make_test 6  basic 5000
make_test 7 basic 10000
make_test 8 basic 50000
make_test 9 basic 100000
make_test 10 basic 1000000
