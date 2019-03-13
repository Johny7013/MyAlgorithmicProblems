/* Losowa generatorka, która losuje masê, si³ê, przyœpieszenia i wspó³rzêdne lokacji
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - liczba lokacji do 1000
        3) m - masa Kamila z rowerem
        4) f - si³a hamulców
 */

#include <sowa/gen.h>

int seed, n,m,f;

int main()
{
    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);

    m=rand()%151+100;
    f=rand()%901+100;

    printf("%d %d %d\n", n, m, f);

    for(int i=1;i<=n;i++)
    {
        printf("%d %d %d %d %d\n", rand() % 10+1, rand() % 1000 + 1, rand() % 1000 + 1, rand() % 1000 + 1, rand() % 1000 + 1);
    }

	//printf("%d %d %d\n", rand() % n + 1, rand() % n + 1, rand() % n + 1);
}
