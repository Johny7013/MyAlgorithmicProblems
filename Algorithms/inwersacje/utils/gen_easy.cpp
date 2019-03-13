/* Od 1 do n
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
		  tab[i] = i + 1;
	  }
	
	for(int i = 0; i < n - 1; i++)
	  {
		  printf("%d ", tab[i]);
	  }
	
	printf("%d\n", tab[n - 1]);
}
