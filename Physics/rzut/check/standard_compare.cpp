#include <cstdio>
#define fscanf(arg...) (fscanf(arg)?:0)
using namespace std;
typedef long double ftype;

const ftype EPS = 1e-3;

bool IZ(ftype x) { return -EPS<=x && x<=EPS; }
bool EQ(ftype x0, ftype x) { return IZ(x0-x) || IZ((x-x0)/x0); }


int main(int argc, char *argv[])
{
	FILE *A = fopen(argv[2], "r");
	FILE *B = fopen(argv[3], "r");
	
	ftype a, b;
	fscanf(A, "%Lf", &a);
	fscanf(B, "%Lf", &b);
	
	if (EQ(b, a)) puts("100");
	else puts("0");
	
	return 0;
}
