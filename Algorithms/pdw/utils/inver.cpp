#include <bits/stdc++.h>
#include <sowa/oi.h>
#include <cstdio>

template <class T> void ignore_result(T x){}

#define FOR(x, b, e) for(int x = b; x <= (e); ++x)
#define FORD(x, b, e) for(int x = b; x >= (e); --x)
#define REP(x, b) for(int x = 0; x < (b); ++x)
#define SIZE(c) (int(c.size()))
#define ALL(c) ((c).begin(), (c).end())
#define MP make_pair
#define PB push_back
#define ST first
#define ND second
#define X coord[0]
#define Y coord[1]

using namespace std;

typedef long double LD;
typedef long long LL;
typedef vector <int> VI;
typedef pair <int, int> PII;
typedef vector <PII> VPII;

struct Point
{
	LL coord[2];
	
	Point(LL x = 0, LL y = 0)
	{
		X = x;
		Y = y;
	}
	
	bool operator<(const Point &a) const
	{
		return MP(Y, X) < MP(a.Y, a.X);
	}
	
	bool operator==(const Point &a)
	{
		return (coord[0] == a.coord[0]) && (coord[1] == a.coord[1]);
	}
	
	Point operator+(const Point &a)
	{
		Point tmp(*this);
		
		REP(i, 2)
		  tmp.coord[i] += a.coord[i];
		
		return tmp;
	}
	
	Point operator-(const Point &a)
	{
		Point tmp(*this);
		
		REP(i, 2)
		  tmp.coord[i] -= a.coord[i];
		
		return tmp;
	}
};

struct Segment
{
	Point a;
	Point b;
	
	Segment(Point a1=Point(0,0), Point b1=Point(0,0))
	{
		a = a1;
		b = b1;
	}
};

LL det(const Point& a, const Point& b)
{
	return (a.X * b.Y) - (a.Y * b.X);
}

LL direction(Point a, Point b, const Point &s)
{
	a = a - s;
	b = b - s;
	
	return det(a, b);
}


bool zawiera(const Point &a, const Segment &b)
{
	return (min(b.a.X, b.b.X) <= a.X) && (max(b.a.X, b.b.X) >= a.X) && (min(b.a.Y, b.b.Y) <= a.Y) && (max(b.a.Y, b.b.Y) >= a.Y);
}

bool przeciecie(const Segment &a, const Segment &b)
{
	LL d1 = direction(a.a, b.a, b.b);
	LL d2 = direction(a.b, b.a, b.b);
	LL d3 = direction(b.a, a.a, a.b);
	LL d4 = direction(b.b, a.a, a.b);
	
	if((((d1 > 0) && (d2 < 0)) || ((d1 < 0) && (d2 > 0))) && 
	(((d3 > 0) && (d4 < 0)) || ((d3 < 0) && (d4 > 0))))
	  return true;
	
	if((d1 == 0) && (zawiera(a.a, b)))
	  return true;
	
	if((d2 == 0) && (zawiera(a.b, b)))
	  return true;
	
	if((d3 == 0) && (zawiera(b.a, a)))
	  return true;
	
	if((d4 == 0) && (zawiera(b.b, a)))
	  return true;
	
	return false;
}

bool przeciecie2(const Segment &a, const Segment &b)
{
	LL d1 = direction(a.a, b.a, b.b);
	LL d2 = direction(a.b, b.a, b.b);
	LL d3 = direction(b.a, a.a, a.b);
	LL d4 = direction(b.b, a.a, a.b);
	
	if((((d1 > 0) && (d2 < 0)) || ((d1 < 0) && (d2 > 0))) && 
	(((d3 > 0) && (d4 < 0)) || ((d3 < 0) && (d4 > 0))))
	  return true;
	
	if((d1 == 0) && (zawiera(a.a, b)))
	  return true;
	
	
	if((d4 == 0) && (zawiera(b.b, a)))
	  return true;
	
	return false;
}

bool przeciecie3(const Segment &a, const Segment &b)
{
	LL d1 = direction(a.a, b.a, b.b);
	LL d2 = direction(a.b, b.a, b.b);
	LL d3 = direction(b.a, a.a, a.b);
	LL d4 = direction(b.b, a.a, a.b);
	
	if((((d1 > 0) && (d2 < 0)) || ((d1 < 0) && (d2 > 0))) && 
	(((d3 > 0) && (d4 < 0)) || ((d3 < 0) && (d4 > 0))))
	  return true;
	
	if((d2 == 0) && (zawiera(a.b, b)))
	  return true;
	
	if((d3 == 0) && (zawiera(b.a, a)))
	  return true;
	
	return false;
}

	Point tab[305];
	Segment tablica[305];

int main()
{
	int n,a,b;
	
	

	ignore_result(scanf("%d", &n));
//Point a = Point(7, 9);
//Segment tmp = Segment(a, Point(0, 0));
    	assert(n>=4 && n<=300);

	for(int i=1;i<=n;i++)
	{
		ignore_result(scanf("%d %d", &a, &b));
		assert(a>=-30000 && a<=30000 && b>=-30000 && b<=30000);
		tab[i]=Point(a,b);
	}

	for(int i=1;i<n;i++)
	{
		tablica[i]=Segment(tab[i],tab[i+1]);
	}

	tablica[n]=Segment(tab[n],tab[1]);

	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			/*if(przeciecie(tablica[i],tablica[j]))
			{
				printf("%d %d\n", i, j);
			}

			cout<<!(przeciecie(tablica[i],tablica[j]))<<endl;

			cerr<<tablica[i].a.X<<" "<<tablica[i].a.Y<<" "<<tablica[i].b.X<<" "<<tablica[i].b.Y<<endl;
			cerr<<tablica[j].a.X<<" "<<tablica[j].a.Y<<" "<<tablica[j].b.X<<" "<<tablica[j].b.Y<<endl;*/

			if(j==i+1)
			{
				assert(!(przeciecie2(tablica[i],tablica[j])));
			}
			else
			{
				if(i==1 && j==n)
				{
				assert(!(przeciecie3(tablica[i],tablica[j])));	
				}
				else
				assert(!(przeciecie(tablica[i],tablica[j])));
			}
		}

	}

	printf("OK");



	
	
	
	
	return 0;
}

