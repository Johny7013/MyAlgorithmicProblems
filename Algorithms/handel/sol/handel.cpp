#include <iostream>
#include <cstdio>
#include <vector>
#include <bitset>
#define scanf(arg...) (scanf(arg)?:0)
using namespace std;

vector<int> graf[1000007];
bitset<1000007> wierzcholki,odw1,odw2,odw3;
int odl2[1000007],odl3[1000007], maks=0, maksa=0;
bool c=false;

bool dfs1(int a)
{
    odw1[a]=true;
    for(int i=0;i<graf[a].size();i++)
    {
        if(!odw1[graf[a][i]])
        {
            c=dfs1(graf[a][i]);

            if(c)
            {
                wierzcholki[a]=true;
            }
        }
    }
    if(wierzcholki[a]==false)
    {
        odw2[a]=true;
        odw3[a]=true;
    }
    return wierzcholki[a];
}

void dfs2(int a, int b)
{
    odw2[a]=true;
    odl2[a]=b;

    if(b>maks)
    {
        maks=b;
        maksa=a;
    }

    for(int i=0;i<graf[a].size();i++)
    {
        if(odw2[graf[a][i]]==false)
        {
            dfs2(graf[a][i],b+1);
        }
    }
}

void dfs3(int a, int b)
{
    odw3[a]=true;
    odl3[a]=b;

    if(b>maks)
    {
        maks=b;
    }

    for(int i=0;i<graf[a].size();i++)
    {
        if(odw3[graf[a][i]]==false)
        {
            dfs3(graf[a][i],b+1);
        }
    }

}

int main()
{
    int n,a,b,root;
    bool p=false;
    scanf("%d", &n);

    for(int i=1;i<n;i++)
    {
        scanf("%d %d", &a, &b);
        graf[a].push_back(b);
        graf[b].push_back(a);

        if(wierzcholki[a]==false)
        {
            if(graf[a].size()>2)
            {
                root=a;
                wierzcholki[a]=true;
            }
        }
        if(wierzcholki[b]==false)
        {
            if(graf[b].size()>2)
            {
                root=b;
                wierzcholki[b]=true;
            }
        }

    }

    p=dfs1(root);

    dfs2(root,0);
    maks=0;
    dfs3(maksa,0);

    printf("%d\n", maks);

    return 0;
}
