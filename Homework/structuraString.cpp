#include <iostream>
#include <cmath>
using namespace std;

struct string{
    int s;
    char cop[s];
    
    string( int x, char y[x]): s(x), c(y){}
    string& operator+ (string& a, string& b){
        char k[a.s+b.s];
        for (int i=0, i<(a.s), i++){
            k[i]=a.c[i];
        }
        for (int i=a.s, i<(b.s), i++){
            k[i]=b.c[i];
        }
        return (string(a.s+b.s, k))
    }
};

int main(){
    string strochka;
    string stroka;
    strochka.s = 6;
    strochka.cop = {2,4,5,2,4,1};
    stroka.s = 3;
    stroka.cop = {char z,char v,char a};
    cout << (strochka+stroka)<< ' ' << strochka[3] << endl;
return 0;
}
