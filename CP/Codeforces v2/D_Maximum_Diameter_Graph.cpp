#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, diameter = 0; cin >> n;
    vector<pair<int, int>>degree, khela, ans;
    for(int i = 0; i < n; i += 1){
        int d; cin >> d; degree.emplace_back(d, i + 1);
    }
    bool no = 0;
    sort(degree.begin(), degree.end());
    for(int i = n - 2; i >= 0; i -= 1){
        if(!degree.back().first) break;
        degree.back().first -= 1; 
        ans.emplace_back(degree.back().second, degree[i].second);
        diameter += 1;  khela.push_back(degree.back());
        degree.pop_back(); degree.back().first -= 1;
        
    }
    reverse(khela.begin(), khela.end());
    bool first = 1;
    degree.pop_back();
    while(!degree.empty() && !no && !khela.empty()){
        pair<int, int>pi = khela.back();
        if(first) diameter += 1;
        first = 0;
        while(pi.first > 0 && !degree.empty() && !no && !khela.empty()){
            ans.emplace_back(pi.second, degree.back().second); degree.pop_back();
            pi.first -= 1;
        }
        khela.pop_back();
    }
    if(!degree.empty()) no = 1;
    if(no) cout << "NO\n";
    else{
        cout << "YES " << diameter << '\n';
        cout << ans.size() << '\n';
        for(pair<int, int>pi: ans) cout << pi.first << " " << pi.second << '\n';
    }
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