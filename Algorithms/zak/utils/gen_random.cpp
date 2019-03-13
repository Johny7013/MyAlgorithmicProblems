/* gen_random - generuje n losowych liczb z zakresu od 1 do x^2
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
	2) n - liczba liczb do wygenerowania
	3) x - liczby są z zakresy do x^2
 */ 

#include<sowa/gen.h>
#include <algorithm>
#include <cstdio>

using namespace std;

int seed;
long long n,x,y;

int main()
{
	
    mscanf("%d %lld %lld",&seed, &n,&x);
    dataRead();
    srand(seed);

	printf("%lld\n", n);

	for(int i=1;i<=n;i++)
	{
		y=rand()%x+1;
		y*=y;
		printf("%lld\n", y);
	}
	
}
