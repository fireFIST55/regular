#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    if(n <= 26){
        string s;
        for(int i = 0; i < n; i += 1) s += ('a' + i);
        cout << s << '\n';
        return;
    }
    int mid = (n & 1)?2: 1, left = (n - mid) / 2, right = n - mid - left;
    string ans;
    ans += string(left, 'a');
    for(int k = 0; k < mid; k += 1) ans += ('b' + k);
    ans += string(right, 'a');
    cout << ans << '\n';
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