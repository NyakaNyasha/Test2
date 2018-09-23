#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    double x;
    cin>>n;
    double a[n][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cin>>a[i][j];
        }
    }

    for(int k=0;k<n-1;k++) {
        for (int i = k+1; i < n; i++) {
            double c = a[i][k] / a[k][k];
            for (int j = k; j < n+1; j++) {
                //cout<<a[i][j]<<" ";
                //cout<< c;
                a[i][j] -= c*a[k][j];
                //cout<<a[i][j]<<endl;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
