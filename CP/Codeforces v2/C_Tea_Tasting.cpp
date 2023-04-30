#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>b(n), vc(n), prefix(n), extra(n, 0), khela(n);
    for(int i = 0; i < n; i += 1) cin >> vc[i];
    for(int i = 0; i < n; i += 1){
        cin >> b[i]; prefix[i] = (i?prefix[i - 1]: (ll)0) + b[i];
    }
    for(int i = 0; i < n; i += 1){
        int left = i, right = n - 1, index = i - 1;
        while(left <= right){
            int mid = (left + right) >> 1;
            ll x = prefix[mid] - (i?prefix[i - 1]: (ll)0);
            if(x <= vc[i]) index = mid, left = mid + 1;
            else right = mid - 1;
        }
        
        if(index + 1 < n){
            khela[index + 1] -= 1; 
            if(index != i - 1) extra[index + 1] += (vc[i] - (prefix[index] - (i?prefix[i - 1]: 0)));
            else extra[i] += vc[i];
        }
        khela[i] += 1;
    }
    for(int i = 0; i < n; i += 1) khela[i] += (i?khela[i - 1]:0);
    for(int i = 0; i < n; i += 1) extra[i] += khela[i] * b[i];
    for(int i = 0; i < n; i += 1) cout << extra[i] << ' ';
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}