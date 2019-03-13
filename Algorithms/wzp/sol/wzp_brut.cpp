//bad_solution

#include <iostream>
#include <cstdio>
#include <cmath>
#include <bitset>
#include <algorithm>

using namespace std;

//szablon funkcji, ktory pozwala na poradzenie sobie z warningami od
//funkcji zadeklarowanych z warn_unused_result (np. scanf).
//Przykladowe uzycie: ignore_result(scanf("%d",&n))
template <class T> void ignore_result(T x){}

int tab[100007], indeksy[100007];

int main()
{
    int n, t, x,a=1;

    ignore_result(scanf("%d %d", &n, &t));

    for(int i=1;i<=n;i++)
    {
        scanf("%d", &tab[i]);
        indeksy[i]=tab[i];
    }

    sort(tab+1, tab+n+1);

    for(int i=1;i<=t;i++)
    {
        scanf("%d", &x);

        a=1;

        while(!(tab[a]!=indeksy[x] && tab[a-1]==indeksy[x]))
        {
            a++;
        }
        a--;

        printf("%d\n", n-a);
    }


    return 0;
}
