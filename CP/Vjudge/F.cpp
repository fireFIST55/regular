#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    double n, r, pi = acos(-1); cin >> n >> r;
    double theta = pi*(n - 2.0)/n, R = (r*cos(theta/2.0))/(1.0 - cos(theta/2.0));

    printf("%lf\n", R);
}

int main(void){
    // ios_base::sync_with_stdio(false); 
    // cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}