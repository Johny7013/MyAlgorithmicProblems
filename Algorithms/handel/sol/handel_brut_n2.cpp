//bad_solution
#include <iostream>
#include <cstdio>
#include <vector>
#include <bitset>
#define scanf(arg...) (scanf(arg)?:0)
using namespace std;

vector<int> graf[1000007];
bitset<1000007> odw;

int tab[1000007], odl[1000007],maks=0;

void dfs(int a,int b)
{
    odw[a]=true;
    odl[a]=b;
    for(int i=0;i<graf[a].size();i++)
    {
        if(odw[graf[a][i]]==false)
        {
            if(graf[graf[a][i]].size()>2)
            {
                if(maks<odl[a]+1)
                {
                    maks=odl[a]+1;
                }
            }

            dfs(graf[a][i],b+1);
        }
    }
}

int main()
{
    int n,a,b,roz=0;

    scanf("%d", &n);

    for(int i=1;i<n;i++)
    {
        scanf("%d %d", &a, &b);
        graf[a].push_back(b);
        graf[b].push_back(a);

                if(graf[a].size()>2)
                {
                    roz++;
                    tab[roz]=a;
                }

                if(graf[b].size()>2)
                {
                    roz++;
                    tab[roz]=b;
                }
    }

    for(int i=1;i<=roz;i++)
    {
        dfs(tab[i], 0);

        for(int j=1;j<=n;j++)
        {
            odl[j]=0;
            odw[j]=false;
        }
    }

    printf("%d\n", maks);

    return 0;
}
