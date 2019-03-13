#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define scanf(arg...) (scanf(arg)?:0)

int main()
{
    double m, v, h, fz, G=6.674, R=6.378,M=59720000,a,t1,v2,vc,a_op, wynik=0,v_kosmiczna,fy,fx,sx,sy,ax,ay;

    cin>> m>>v>>h>>fz;

    v/=3.6;


    v_kosmiczna=sqrt(G*M/(R));
    //cout<<v_kosmiczna<<endl;

    if(v>=v_kosmiczna)
    {
        cout<<fixed;
        cout.precision(3);
        cout<<wynik;
        return 0;
    }
    else
    {
        a=G*(M/1000000)/((R+h/1000000)*(R+h/1000000));
        //t1=sqrt(2*h/a);

        v2=sqrt(2*h*a);



        vc=sqrt(v*v+v2*v2);
        //cout<<vc<<" "<<v<<" "<<v2<<endl;

        /*a_op=fz/m;

        wynik=vc*vc/a_op;*/


        fx=fz*v/vc;

        /*ay=(fy-a*m)/m;
        ax=fx/m;

        sy=(v2*v2)/(2*ay);

        sx=(v*v)/(2*ax);

        wynik=sqrt(sy*sy+sx*sx);*/

        //cout<<sy<<" "<<sx<<endl;

        cout<<fixed;
        cout.precision(3);
        cout<<fx;

    }






    return 0;
}
