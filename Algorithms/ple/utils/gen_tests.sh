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
make_test 2 basic 20
make_test 3 basic 30
make_test 4 basic 40
make_test 5 basic 50
make_test 6 basic 60
make_test 7 basic 70
make_test 8 basic 80
make_test 9 basic 90
make_test 10 basic 100

