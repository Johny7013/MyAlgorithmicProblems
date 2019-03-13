/* 1n2(n - 1)...
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - dlugosc permutacji
 */ 

#include <sowa/gen.h>
#include <algorithm>

int seed, n;
int tab[1000009];

int main()
{
    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);
	
	printf("%d\n", n);
	
	for(int i = 0; i < n; i++)
	  {
		  if(i % 2 == 0)
			tab[i] = (i / 2) + 1;
		  
		  else
		    tab[i] = n - (i / 2);
	  }
	
	for(int i = 0; i < n - 1; i++)
	  {
		  printf("%d ", tab[i]);
	  }
	
	printf("%d\n", tab[n - 1]);
}
