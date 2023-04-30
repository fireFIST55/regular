#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll result = 0;
    int n, m; cin >> n >> m;
    vector<int>x(n), ans;
    vector<pair<int, int>>khela;
    for(int &i: x) cin >> i;
    sort(x.begin(), x.end());

    khela.emplace_back(INT_MIN, x[0]);
    for(int i = 0; i < n; i += 1){
        int j = i + 1; 
        while(j < n && x[j] - x[j - 1] == 1) j += 1;
        if(j < n) khela.emplace_back(x[j - 1], x[j]);
        else khela.emplace_back(x[j - 1], INT_MAX);
        i = j - 1;
    }
    
    vector<pair<int, pair<int, int>>>pr;
    for(int i = 0; i < khela.size(); i += 1){
        if(!i) pr.emplace_back(INT_MAX, khela[i]);
        else if(i == khela.size() - 1) pr.emplace_back(INT_MAX, khela[i]);
        else pr.emplace_back(khela[i].second - khela[i].first, khela[i]);
    }
    sort(pr.begin(), pr.end(), greater<pair<int, pair<int, int>>>());
    for(int i = 1; ; i += 1){
        if(!m) break;
        for(pair<int, pair<int, int>>&p: pr){
            if(!m) break;
            if(p.second.first == INT_MIN){
                result += (ll)i; ans.emplace_back(--p.second.second);
            }
            else{
                result += (ll)i; ans.emplace_back(++p.second.first);
            }
            m -= 1;
        }
        for(int k = pr.size() - 1; k >= 0; k -= 1){
            if(pr[k].second.second - pr[k].second.first == 1) pr.pop_back();
            else break;
        }
    }
    cout << result << '\n';
    for(int i: ans) cout << i << ' ';
    cout << '\n';
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