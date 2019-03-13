/* Calkowicie losowa generatorka.
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - gorny zakres na dane wejsciowe
 */ 

#include <sowa/gen.h>

int seed, n;

int main()
{
    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);
	
	printf("%d %d %d\n", rand() % n + 1, rand() % n + 1, rand() % n + 1);
}
