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

make_test 1a basic 1
make_test 1b basic 8
make_test 1c basic 8
make_test 1d reverse 4
make_test 1e easy 7
make_test 1f shuffle 6
make_test 2a basic 20
make_test 2b basic 35
make_test 2c basic 50
make_test 2d reverse 27
make_test 2e easy 77
make_test 2f shuffle 100
make_test 3a basic 500
make_test 3b basic 550
make_test 3c basic 670
make_test 3d reverse 789
make_test 3e easy 504
make_test 3f shuffle 1000
make_test 4a basic 10006
make_test 4b basic 2700
make_test 4c basic 5000
make_test 4d reverse 64639
make_test 4e easy 64495
make_test 4f shuffle 10000
make_test 5a basic 10000
make_test 5b basic 50000
make_test 5c basic 30000
make_test 5d reverse 40000
make_test 5e easy 75000
make_test 5f shuffle 100000
