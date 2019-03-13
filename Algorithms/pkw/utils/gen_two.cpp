/* Generatorka, która podaje przedziały po kolejki 1 i n później 2 i n-1 itd.
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
	2) n - liczba przedziałów
	3) k - maksymalny prawy koniec przedziału
 */ 

#include<sowa/gen.h>
#include <cstdio>
#include <algorithm>

using namespace std;

int seed;

int main()
{
    long long n,k,a,b,x;

    mscanf("%d %lld %lld",&seed, &n, &k);
    dataRead();
    srand(seed);

    printf("%lld\n", n); 

    for(int i=0;i<n;i++)
    {
        printf("%d %d\n", i+1, k-i);
    }

    return 0;
}
