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

int tab[100007];

int main()
{
    int n, t, x,a;

    ignore_result(scanf("%d %d", &n, &t));

    for(int i=1;i<=n;i++)
    {
        scanf("%d", &tab[i]);
    }

    for(int i=1;i<=t;i++)
    {
        scanf("%d", &a);

        x=0;

        for(int j=1;j<=n;j++)
        {
            if(tab[j]>tab[a])
            {
                x++;
            }
        }

        printf("%d\n", x);
    }


    return 0;
}
