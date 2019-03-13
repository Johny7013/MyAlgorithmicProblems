/* Prosta przykladowa generatorka, ktora nic nie wypisuje. _Koniecznie trzeba_
 * zastapic ten tekst jakims swoim opisem generatorki. (I nie pominac opisu 
 * argumentow.)
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 */ 

#include<sowa/gen.h>

int seed;

int main()
{
    mscanf("%d",&seed);
    dataRead();
    srand(seed);

	printf("1");
}
