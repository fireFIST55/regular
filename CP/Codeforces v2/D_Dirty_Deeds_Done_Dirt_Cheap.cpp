#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, pair<int, int>>>one, two;
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v;
        if(u < v) one.push_back({u, {v, i}});
        if(u > v) two.push_back({u, {v, i}});
    }
    sort(one.rbegin(), one.rend()); sort(two.begin(), two.end());
    int mx = INT_MIN, index = 0;
    deque<pair<int, pair<int, int>>>khela1, khela2;
    for(int i = 0; i < n; i += 1){
        khela1.push_back(one[i]);
        if(one[i].second.first > mx) mx = one[i].second.first, index = i;
    }
    vector<int>ans1, ans2; ans1.emplace_back(index);
    int last = mx;
    while(!khela1.empty()){
        if(last > khela1.front().first && khela1.front().second.second != index){
            last = khela1.front().second.first;
            ans1.emplace_back(khela1.front().second.second); khela1.pop_front();
        }
        else khela1.pop_front();
    }
    mx = INT_MAX;
    for(int i = 0; i < n; i += 1){
        khela2.push_back(two[i]);
        if(two[i].second.first < mx) mx = two[i].second.first, index = i;
    }
    last = mx; ans2.emplace_back(index);
    while(!khela2.empty()){
         
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