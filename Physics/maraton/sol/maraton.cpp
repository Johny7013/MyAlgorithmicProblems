#include<iostream>

using namespace std;

int main()
{
    long double v1,v2,v3,vsr;
    cin >> v1 >> v2 >> v3;
    vsr=3*v1*v2*v3/(v1*v2+v1*v3+v2*v3);
    cout << fixed;
    cout.precision(3);
    cout << vsr;
	return 0;
}
