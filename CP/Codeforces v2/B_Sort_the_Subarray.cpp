#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, l = 0, r = 0; cin >> n;
    vector<int>vc(n), a(n);
    for(int &i: vc) cin >> i;
    for(int &i: a) cin >> i;
    for(int i = 0; i < n; i += 1){
        if(a[i] == vc[i]) continue;
        int L = i, R = i;
        while(L - 1 >= 0 && a[L - 1] <= a[L]) L -= 1;
        while(R + 1 < n && a[R + 1] >= a[R]) R += 1;
        if(R - L + 1 >= r - l + 1) r = R, l = L;
        i = R;
    }
    cout << l + 1 << " " << r + 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}