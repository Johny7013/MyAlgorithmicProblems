#include <cstdio>
#include <sowa/oi.h>

template <class T> void ignore_result(T x){}

int m,v,h,f0,fz;

int main()
{
	ignore_result(scanf("%d %d %d %d", &m, &v, &h, &fz));

	assert(10<=m && m<=15 && 1<=v && v<=100000 && 1<=h && h<=1000  && 150<=fz && fz<=1000);
    printf("OK\n");
    return 0;
}
