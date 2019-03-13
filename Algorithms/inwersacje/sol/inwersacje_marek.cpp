#include <bits/stdc++.h>
#define scanf(arg...) scanf(arg)?:0

using namespace std;

const int MAXN = 1e6 + 9;
const int POT = 1 << 20;
const long long MOD = 1e9 + 9;

int tab[MAXN];
int it[POT + POT];
long long dp[MAXN];
long long silnia[MAXN];
long long dp2[MAXN];

void add(int a, int w)
{
    a += POT;
    it[a] += w;
    a /= 2;
    
    while(a > 0)
      {
          it[a] += w;
          a /= 2;
      }
}

long long query(int a, int b)
{
    long long wyn = 0;
    
    a += POT - 1;
    b += POT + 1;
    
    while(a + 1 != b)
      {
          if(a % 2 == 0)
            wyn += it[a + 1];
          
          if(b % 2 == 1)
            wyn += it[b - 1];
          
          a /= 2;
          b /= 2;
      }
    
    return wyn;
}

inline long long gauss(long long a)
{
    return max((a * (a + 1ll)) / 2ll, 0ll);
}

int main()
{
    long long wyn = 0;
    int n;
    
    cin>>n;
    
    for(int i = 0; i < n; i++)
      {
          scanf("%d", &tab[i]);
      }
    
    silnia[0] = 1;
    
    for(long long i = 1; i < n; i++)
      {
          silnia[i] = silnia[i - 1] * i;
          silnia[i] %= MOD;
      }
    
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 0;
    
    for(long long i = 3; i <= n; i++)
      {
          dp[i] = dp[i - 1] * (i - 1);
          dp[i] %= MOD;
          dp[i] += silnia[i - 2] * gauss(i - 2);
          dp[i] %= MOD;
      }
    
    dp2[1] = 1;
    add(tab[n - 1], 1);
    
    for(long long i = 2; i < n; i++)
      {
          add(tab[n - i], 1);
          
         // cout<<query(1, tab[n - i])<<" "<<silnia[i - 1]<<endl;
          
          dp2[i] = (query(1, tab[n - i]) - 1) * silnia[i - 1];
          dp2[i] %= MOD;
          dp2[i] += dp2[i - 1];
          dp2[i] %= MOD;
      }
    
   /* for(int i = 0; i < 6; i++)
      {
          cout<<dp[i]<<endl;
      }*/
        
    fill(it, it + POT + POT, 0);
    
    for(int i = 0; i < n; i++)
      {
          add(tab[i], 1);
      }
    
    for(int i = 0; i < n - 1; i++)
      {
          add(tab[i], -1);
         //cout<<wyn<<endl;// cout<<query(1, tab[i])<<endl;
          wyn += dp[n - i] * query(1, tab[i]);
          wyn %= MOD;
          //cout<<wyn<<endl;
          wyn += gauss(query(1, tab[i]) - 1) * silnia[n - i - 1];
          wyn %= MOD;
         // cout<<wyn<<" "<<gauss(2)<<" "<<dp2[n - i - 1]<<endl;
          wyn += query(1, tab[i]) * dp2[n - i - 1];
          wyn %= MOD;
         // cout<<wyn<<endl;
          //cout<<endl;
      }
    
    cout<<wyn<<endl;
    
    return 0;
}
