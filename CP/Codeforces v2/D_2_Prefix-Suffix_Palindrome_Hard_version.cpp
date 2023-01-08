#include<bits/stdc++.h>
#define ll long long
using namespace std;

string func(string t){
    string s = t + "#"; reverse(t.begin(), t.end()); s += t;
    int n = s.length();
    vector<int>failure(n);
    for(int i = 1; i < n; i += 1){
        int j = failure[i - 1];
        while(j > 0 && s[i] != s[j]) j = failure[j - 1];
        if(s[i] == s[j]) j += 1;
        failure[i] = j;
    }

    return s.substr(0, failure[n - 1]);
}

void solve(){
    string s; cin >> s;
    int n = s.length(), l = - 1, r = n;
    while(l + 1 < r - 1 && s[l + 1] == s[r - 1]){
        l += 1; r -= 1;
    }
    if(l + 1 < r - 1){
        for(int i = 0; i <= l; i += 1) cout << s[i];
        string t = s.substr(l + 1, (r - 1) - (l + 1) - 1);
        string ans1 = func(t); reverse(t.begin(), t.end());
        string ans2 = func(t);
        if(ans1.size() > ans2.size()) cout << ans1;
        else cout << ans2;
        for(int i = r; i < n; i += 1) cout << s[i];
        cout << '\n';
    }
    else cout << s << '\n';
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