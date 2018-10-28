#include <iostream>


using namespace std;

void fun(int *a,int l,int r,int k) {
    int x = a[l+1];
    int i = l;
    int j = r;
    while (a[i] < x) {
        i++;
    }
    while (a[j] > x) {
        j--;
    }
    if (i <= j) {
        int v1 = a[i];
        a[i] = a[j];
        a[j] = v1;
        i++;
        j--;
    }
    if (k<x){fun(a, l, j, k);}
    else {fun(a, i, r, k);}
}
int main(){
    int s =10;
    int k, d;
    int a[10]={1,8,6,4,7,2,3,8,5,6};
    k =4;
    fun(a,0,s,k);
    for (d=0; d<10; d=d+1){
        cout << a[d]<<' ';
    }
    cout << a[k];
    return 0;
}
