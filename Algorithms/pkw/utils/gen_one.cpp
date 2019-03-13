/* Losowa generatorka, która podaje 3 różne rodzaje przedziałów
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


    //scanf("%lld %lld", &n, &k);

    for(int i=1;i<=n;i++)
    {
        if(i%3==1)
        {
            x=k/4;

            if(x<0)
            x++;

            a=rand()%x+1;

            b=3*k/4;
            b+=rand()%x+1;

            printf("%lld %lld\n", a, b);
        }
        if(i%3==2)
        {
            x=k/4;

            if(x<0)
            x++;

            a=rand()%x+1;

            b=k/2;
            b+=rand()%x+1;

            printf("%lld %lld\n", a, b);
        }
        if(i%3==0)
        {
            x=k/4;

            if(x<0)
            x++;

            a=k/4;
            a=rand()%x+1;

            b=3*k/4;
            b+=rand()%x+1;

            printf("%lld %lld\n", a, b);
        }

    }

    return 0;
}
