#include <bits/stdc++.h>
#define scanf(arg...) (scanf(arg)?:0)

using namespace std;

const int MAXN = 1e6 + 9;

vector <int> tab[MAXN];
bool czy[MAXN];
bool odw[MAXN];
int maxi, num;

int dfs(int poz, int p)
{
    int tmp = 0;
    
    for(int i = 0; i < tab[poz].size(); i++)
      {
          if(tab[poz][i] != p)
            tmp += dfs(tab[poz][i], poz);
      }
    
    if(czy[poz])
      return 0;
    
    if(tmp == tab[poz].size() - 1)
      {
          odw[poz] = true;
          return 1;
      }
    
    return 0;
}

void dfs2(int poz, int p, int g)
{
    if(maxi <= g)
      {
          maxi = g;
          num = poz;
      }
    
    for(int i = 0; i < tab[poz].size(); i++)
      {
          if((!odw[tab[poz][i]]) && (tab[poz][i] != p))
            dfs2(tab[poz][i], poz, g + 1);
      }
}

int main()
{
    int n, a, b;
    
    cin>>n;
    
    for(int i = 0; i < n - 1; i++)
      {
          scanf("%d %d", &a, &b);
          
          a--;
          b--;
          
          tab[a].push_back(b);
          tab[b].push_back(a);
      }
    
    int root;
    
    for(int i = 0; i < n; i++)
      {
          if(tab[i].size() >= 3)
            {
                root = i;
                czy[i] = true;
            }
      }
    
    dfs(root, root);
    
    maxi = 0;
    dfs2(root, root, 0);
    
    maxi = 0;
    dfs2(num, num, 0);
    
    cout<<maxi<<endl;
    
    return 0;
}
