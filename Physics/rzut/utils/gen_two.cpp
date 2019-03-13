/* V takie, ¿e pi³ka spadnie.
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) m,v,h,fz - wartosci fizyczne, które losujemy
 */

#include <sowa/gen.h>

int seed;

int main()
{
    mscanf("%d", &seed);
    dataRead();
    srand(seed);

	printf("%d %d %d %d\n", rand() % 6 + 10, rand() % 50000 + 50001, rand() % 1000 + 1, rand() % 851 + 150);
}
