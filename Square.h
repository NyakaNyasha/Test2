#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;


int main()
{
    int a, b, c, d;
    double x1, x2, ds;
    cin >>a>>b>>c;
    d = b*b-(4*a*c);
    if (d>=0) {
        ds = sqrt(d);
        x1= (ds-b)/(2*a);
        x2= (-ds-b)/(2*a);
        cout <<x1 <<x2;
    }
    if (d<0){
        cout<<" nothing";
    }

    
    return 0;
}