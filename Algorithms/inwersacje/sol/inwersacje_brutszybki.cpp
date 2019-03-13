//bad_solution
#include <iostream>
#include <cstdio>
#include <algorithm>
#define scanf(arg...) (scanf(arg)?:0)

using namespace std;

int tab[100007];

const int pot=1<<4;

int drzewo1[pot*2], drzewo2[pot*2];

int main()
{
    int n,suma,a,b;
    long long wynik=0, mod=1000000009;
    scanf("%d ", &n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d", &tab[i]);
        a=i+pot;

        while(a>0)
        {
            drzewo1[a]+=1;
            a/=2;
        }
    }

    for(int i=1;i<pot*2;i++)
    {
        drzewo2[i]=drzewo1[i];
    }
	
    for(int i=1;i<=n;i++)
    {
        a=tab[i]+pot;

        while(a>0)
        {
            drzewo2[a]-=1;
            a/=2;
        }

        suma=0;
        a=pot;
        b=tab[i]+pot;

        while(a+1!=b)
        {
            if(a % 2 == 0)
            suma+=drzewo2[a+1];

            if(b % 2 == 1)
            suma+=drzewo2[b-1];

            a /= 2;
            b /= 2;
        }

        wynik+=suma;
    }

    while(prev_permutation(tab+1, tab+n+1))
    {

        for(int i=1;i<pot*2;i++)
        {
            drzewo2[i]=drzewo1[i];
        }


    for(int i=1;i<=n;i++)
    {
        a=tab[i]+pot;

        while(a>0)
        {
            drzewo2[a]-=1;
            a/=2;
        }

        suma=0;
        a=pot;
        b=tab[i]+pot;

        while(a+1!=b)
        {
            if(a % 2 == 0)
            suma+=drzewo2[a+1];

            if(b % 2 == 1)
            suma+=drzewo2[b-1];

            a /= 2;
            b /= 2;
        }

        wynik+=suma;
    }
    }

    cout<<wynik%mod;

    return 0;
}
