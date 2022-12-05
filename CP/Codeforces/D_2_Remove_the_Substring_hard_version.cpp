#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, t; cin >> s >> t;
    int left = 0, n = s.length(), m = t.length(), ans = 0, right = n - m;
    vector<int>prefix(n), suffix(n);

    for(int i = 0, k = 0; i < n; i += 1){
        if(k < m && s[i] == t[k]) prefix[i] = ++k;
        else prefix[i] = k;
    }
    for(int i = n - 1, k = m - 1, len = 0; i >= 0; i -= 1){
        if(k >= 0 && s[i] == t[k]) suffix[i] = ++len, k -= 1;
        else suffix[i] = len;
    }
    while(left <= right){
        bool yes = 0;
        int mid = (left + right) >> 1;
        for(int i = 0; i + mid  - 1 < n && !yes; i += 1){
            int x = (i?prefix[i - 1]: 0) + (i + mid < n?suffix[i + mid]: 0);
            if(x >= m) yes = 1;
        }

        if(yes) left = mid + 1, ans = mid;
        else right = mid - 1;
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}