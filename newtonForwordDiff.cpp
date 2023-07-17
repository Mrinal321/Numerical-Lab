#include<bits/stdc++.h>
using namespace std;

double X[100], Y[100][100];
double x;
int n;

double solve(){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            Y[i][j] = Y[i-1][j+1]-Y[i-1][j];
            cout << Y[i][j] << " ";
        }
        cout << endl;
    }
    double u = (x-X[0])/(X[1]-X[0]);

    double ans = Y[0][0];
    double fact = 1, v = 1;

    for(int i = 1; i < n; i++){
        v = v*(u-i+1);
        fact *= i;
        ans += v*Y[i][0]/fact;
    }
    return ans;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> X[i];
    for(int i = 0; i < n; i++) cin >> Y[0][i];
    cin >> x;

    cout << solve();
}