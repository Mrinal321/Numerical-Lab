#include<bits/stdc++.h>
using namespace std;

#define EP 0.001

double fValue(double x) {
   return x*x*x - x - 4;
}

double solve(){
    double a = 1.0, b = 2.0;
    while(abs(a-b) >= EP){
        double vA = fValue(a);
        double vB = fValue(b);
        double avg = (a+b)/2;
        double vAvg = fValue(avg);
        if(vAvg == 0.0) break;
        
        if(vA*vAvg < 0) b = avg;
        else a = avg;
    }
    return a;
}

int main(){
    cout << solve();
}