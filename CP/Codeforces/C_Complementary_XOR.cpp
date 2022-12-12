#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 0;
    int n; cin >> n;
    vector<pair<int, int>>ans;
    string a, b; cin >> a >> b;

    function<void()> check = [&](){
        if(a == b){
            yes = 1; return;
        }
        ans.emplace_back(1, n);
        for(int i = 0; i < n; i += 1) a[i] = a[i] == '1'?'0': '1';
        if(a == b)   yes = 1;
    };
    check();

    if(!yes){
        cout << "NO\n";
        return;
    }
    int cnt = 0;
    for(int i = 0; i < n; i += 1){
        if(a[i] == '1') ans.emplace_back(i + 1, i + 1), cnt += 1;
    }
    if(cnt & 1){
        ans.emplace_back(1, 1);
        ans.emplace_back(2, n);
        ans.emplace_back(1, n);
    }
    cout << "YES\n";
    cout << ans.size() << '\n';
    for(pair<int, int>pi: ans) cout << pi.first << " " << pi.second << '\n';
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