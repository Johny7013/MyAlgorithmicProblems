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

make_test 1 random 10 100
make_test 2 random 100 100
make_test 3 random 1000 1000
make_test 4 random 10000 5000
make_test 5 random 100000 10000
make_test 6 random 100000 100000
make_test 7 random 100000 1000000
make_test 8 random 100000 10000000
make_test 9 random 100000 100000000
make_test 10 random 100000 1000000000
