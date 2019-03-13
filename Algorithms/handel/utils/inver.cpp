#include <cstdio>
#include <bits/stdc++.h>
#include <sowa/oi.h>
#define scanf(arg...) (scanf(arg)?:0)

const int MAXN = 1e6;

using namespace std;

vector <int> tab[MAXN + 9];
int ile = 0, ile2 = 0;

void dfs(int poz, int p)
{
	ile++;
	ile2 += tab[poz].size() >= 3;
	
	for(int i = 0; i < tab[poz].size(); i++)
	  {
		  if(tab[poz][i] != p)
			dfs(tab[poz][i], poz);
	  }
}

int main()
{
	int n, a, b;
	
	cin>>n;
	
	assert(6 <= n);
	assert(n <= MAXN);
	
	for(int i = 0; i < n - 1; i++)
	  {
		  scanf("%d %d", &a, &b);
		  
		  assert(1 <= a);
		  assert(1 <= b);
		  assert(a <= n);
		  assert(b <= n);
		  
	  	  tab[a].push_back(b);
		  tab[b].push_back(a);
	  }
	
	dfs(1, 1);
	
	assert(ile == n);
	assert(ile2 >= 2);
	
	assert(cin.get());
	
    printf("OK\n");
    return 0;
}
