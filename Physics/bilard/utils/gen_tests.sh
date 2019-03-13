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


