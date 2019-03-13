/* Calkowicie losowa generatorka.
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
	
	printf("%d\n", rand() % 1000000 + 1);
}
