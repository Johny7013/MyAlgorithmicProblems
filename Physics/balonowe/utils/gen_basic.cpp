/* Calkowicie losowa generatorka.
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 */ 

#include <sowa/gen.h>

int seed;

int main()
{
    mscanf("%d",&seed);
    dataRead();
    srand(seed);
	
	printf("%d %d", rand() % 100000 + 1, rand() % 100000 + 1);
}
