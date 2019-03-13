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
    int n,t,x,p,k,s;

    ignore_result(scanf("%d %d", &n, &t));

    for(int i=1;i<=n;i++)
    {
        scanf("%d", &tab[i]);
        indeksy[i]=tab[i];
    }

    sort(tab+1, tab+n+1);

    /*for(int i=1;i<=n;i++)
    {
        cout<<tab[i]<<" ";
    }*/

    for(int i=0;i<t;i++)
    {
        scanf("%d", &x);

        p=1;
        k=n;

        while(p<k)
        {
            s=(p+k+1)/2;

            if(tab[s]<=indeksy[x])
            {
                p=s;
            }
            else
            {
                k=s-1;
            }

            //cout<<p<<" "<<k<<endl;
        }

        printf("%d\n", n-p);

    }

    return 0;
}
