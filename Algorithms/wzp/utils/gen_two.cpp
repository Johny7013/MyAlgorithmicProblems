/* gen_two, generatorka losuje tylko 2 rozmiary dla wszystkich plików. Zapytania dla losowych numerów.
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
	2) n - liczba plików
	3) t - liczba zapytań plików
 */ 

#include<sowa/gen.h>
#include <cstdio>
#include <algorithm>

using namespace std;

int seed;

int tab[100007];

int main()
{
    int n, t,x,y=1;
    

    mscanf("%d %d %d",&seed, &n, &t);
    dataRead();
    srand(seed);

	printf("%d %d\n", n, t);
	
	x=500000000;
	x+=rand()%500000000;
	
	for(int i=1;i<n/2;i++)
	{
		tab[i]=x;
	}

	x=500000000;
	x+=rand()%500000000;

	for(int i=n/2;i<=n;i++)
	{
		tab[i]=x;
	}

	random_shuffle(tab+1, tab+n+1);

	for(int i=1;i<=n;i++)
	{
		printf("%d ", tab[i]);
	}

	printf("\n");

	for(int i=0;i<t;i++)
	{
		
		printf("%d\n", rand()%n+1);
	}
}
