#include<bits/stdc++.h>
#define ll long long
using namespace std;

int val(string S){
    int s = 0, total = 0;
    for(char ch: S){
        if(ch == 's') s += 1;
        else total += s;
    }
    return total;
}

bool cmp(string a, string b){
    return (a + b) > (b + a);
}

void solve(){
    int n; cin >> n;
    vector<string>vs(n);
    for(string &s: vs) cin >> s;
    sort(vs.begin(), vs.end(), cmp);
    string ans;
    for(int i = 0; i < n; i += 1) ans += vs[i];
    cout << val(ans) << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}