#include <cstdio>
#define scanf(...) scanf(__VA_ARGS__)?:0

using namespace std;

int tab[1000007];
long long sumy[1000007],silnia[1000007], mod=1000000009,wynik=0,suma,permutacje[1000007];
const int pot=1<<20;

int drzewo1[pot*2], drzewo2[pot*2];

int main()
{
    int n,a,b;
    scanf("%d", &n);

    silnia[0]=1;
    sumy[3]=1;
    permutacje[n+1]=1;

    for(long long i=1;i<=n;i++)
    {
        scanf("%d", &tab[i]);
        silnia[i]=(i*silnia[i-1])%mod;
        if(i>3)
        {
            sumy[i]=(((sumy[i-1]*(i-1ll))%mod)+((((i-1ll)*(i-2ll))/2ll)%mod)*silnia[i-2])%mod;
        }

        a=i+pot;

        while(a>0)
        {
            drzewo1[a]+=1;
            a/=2;
        }

    }

    for(int i=n;i>0;i--)
    {
        suma=0;
        a=pot;
        b=tab[i]+pot+1;

        while(a+1!=b)
        {
            if(a % 2 == 0)
            suma+=drzewo2[a+1];

            if(b % 2 == 1)
            suma+=drzewo2[b-1];

            a /= 2;
            b /= 2;
        }

        permutacje[i]=(suma*silnia[n-i]+permutacje[i+1])%mod;
        a=tab[i]+pot;

        while(a>0)
        {
            drzewo2[a]+=1;
            a/=2;
        }

    }
    
    permutacje[n+1]=0;

    for(int i=1;i<=n;i++)
    {
        a=pot+tab[i];
        b=tab[i]+pot+1;
        suma=0;

        while(a>0)
        {
            drzewo1[a]-=1;
            a/=2;
        }

        a+=pot;

        while(a+1!=b)
        {
            if(a % 2 == 0)
            suma+=drzewo1[a+1];

            if(b % 2 == 1)
            suma+=drzewo1[b-1];

            a /= 2;
            b /= 2;
        }
	
        wynik+=((sumy[n-i+1]*suma)%mod+(((suma*(suma-1ll))/2ll)*silnia[n-i])%mod)%mod;
        wynik=wynik%mod;
        wynik+=(permutacje[i+1]*suma)%mod;
        wynik=wynik%mod;
    }

    printf("%lld\n", wynik);

    return 0;
}
