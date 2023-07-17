#include<bits/stdc++.h>
using namespace std;

double A[4][5];

void solve(){
    double tmp1 = A[1][1];
    double tmp2 = A[2][1];
    for(int i = 1; i <= 4; i++){
        A[2][i] = A[1][i]*tmp2 - tmp1*A[2][i];
    }
    tmp2 = A[3][1];
    for(int i = 1; i <= 4; i++){
        A[3][i] = A[1][i]*tmp2 - tmp1*A[3][i];
    }
    cout << "1st Row : \n";
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 4; j++) cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    tmp1 = A[3][2];
    tmp2 = A[2][2];
    for(int i = 1; i <= 4; i++){
        A[3][i] = A[3][i]*tmp2 - tmp1*A[2][i];
    }
    cout << "2nd Row : \n";
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 4; j++) cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    double z = A[3][4]/A[3][3];
    double y = (A[2][4]-z*A[2][3])/A[2][2];
    double x = (A[1][4]-z*A[1][3]-y*A[1][2])/A[1][1];
    cout << "The value of :\n";
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Z = " << z << endl;
}

int main(){
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 4; j++) cin >> A[i][j];
    }
    solve();
}