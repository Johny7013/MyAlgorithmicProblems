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


make_test 1a random 10 10
make_test 1b two 10 10
make_test 2a random 100 100
make_test 2b two 100 100
make_test 3a random 1000 1000
make_test 3b two 1000 900
make_test 4a random 30000 30000
make_test 4b two 30000 30002
make_test 5a random 40000 40000
make_test 5b two 40000 40002
make_test 6a random 60000 60000
make_test 6b two 60002 60000
make_test 7a random 70000 70000
make_test 7b two 70000 70002
make_test 8a random 80000 80000
make_test 8b two 80002 80000
make_test 9a random 90000 90000
make_test 9b two 90000 90002
make_test 10a random 100000 100000
make_test 10b two 100000 99998
