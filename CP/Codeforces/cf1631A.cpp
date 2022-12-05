#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, mx1 = INT_MIN, mx2 = INT_MIN;
    cin >> n;
    vector<int>a(n), b(n);
    for(int &x: a)  cin >> x;
    for(int &x: b)  cin >> x;

    for(int i = 0; i < n; i += 1){
        if(a[i] > b[i]) swap(a[i], b[i]);
        mx1 = max(mx1, a[i]); mx2 = max(mx2, b[i]);
    }

    cout << mx1*mx2 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}