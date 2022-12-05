#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ncr(int n, int r){
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n; k *= r;
            ll m = __gcd(p, k);
            p /= m; k /= m;
            n -= (ll)1; r -= (ll)1;
        }
    }
 
    else
        p = 1;
 
    return p;
}
int main(void){
    //dissapointment
}