/* Calkowicie losowa generatorka.
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - minimalna liczba
 */ 

#include <sowa/gen.h>

int seed, n;

int main()
{
    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);
	
	printf("%d\n", rand() % (10000 - n + 1) + n);
}
