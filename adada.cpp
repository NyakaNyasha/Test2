#include <iostream>

using namespace std;

int fun(int i, int s, int* & a){
    for (i=0; i<s; i++){
        for (int j=0; j<s; j++){
            if ((a[i]==a[j]) && (i != j)) {
                for ( int q=j; q<s-1; q++){
                    a[q]=a[q+1];}
                s--;
            }
        }
    }
    int b = new [s];
    for (i=0; i<s; i++){
        b[i] = a[i];
    }
    delete []a;
    a=b;
    }
    for (i=0; i<s; i++){
        cout << a[i] << ' ';
    }
}

int main()
{
int s,i;
int a[s];
    cin >> s;
    for (i=0; i<s; i++){
        cin >> a[i];
    }
    fun(i,s,a);
    return 0;
}
