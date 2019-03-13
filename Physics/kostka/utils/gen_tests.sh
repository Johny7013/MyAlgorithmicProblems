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

make_test 1a basic
make_test 1b basic
make_test 2a basic
make_test 2b basic
make_test 3a basic
make_test 3b basic
make_test 4a basic
make_test 4b basic
make_test 5a basic
make_test 5b basic
make_test 6a basic
make_test 6b basic
make_test 7a basic
make_test 7b basic
make_test 8a basic
make_test 8b basic
make_test 9a basic
make_test 9b basic
make_test 10a basic
make_test 10b basic
