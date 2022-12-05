#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    char ch = 'a';
    int n; cin >> n;
    if(!n){
        cout << ch << '\n';
        return;
    }
    while(n){
        ll left = 1, right = n, take = 0;
        while(left <= right){
            ll mid = (left + right) / (ll)2;
            if(mid*(mid + 1)/2 <= n){
                take = mid; left = mid + 1;
            }
            else right = mid - 1;
        }

        for(int i = 0; i < take + 1; i += 1) s += ch;
        ch += 1; n -= (take*(take + 1)/2);
    }

    cout << s << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}