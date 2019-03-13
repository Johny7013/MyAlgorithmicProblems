//bad_solution
#include <iostream>
#include <cstdio>
#include <algorithm>
#define scanf(arg...) (scanf(arg)?:0)

using namespace std;

int tab[100007];

int main()
{
    int n;
    long long wynik=0, mod=1000000009;
    scanf("%d ", &n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d", &tab[i]);
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(tab[i]>tab[j])
            wynik++;
        }
    }

    while(prev_permutation(tab+1, tab+n+1))
    {


    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(tab[i]>tab[j])
            wynik++;
        }
    }
    }
    cout<<wynik%mod;

    return 0;
}
