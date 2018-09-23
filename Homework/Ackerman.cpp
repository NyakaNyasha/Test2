#include <iostream>

using namespace std;

int sum = 0;
int fun(int x, int y){
    if(x==0){
        sum = y+1;
    }
    else if (y == 0){
        fun(x-1,1);
    }
    else {
        fun(x-1,(fun(x, y-1)));
    }
    return sum;
}
int main() {
    int x,y;
    cin>>x>>y;
    fun(x,y);
    cout << sum;
    return 0;
}
