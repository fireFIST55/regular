#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<int, int>>vcl[200005], vcr[200005];
vector<int>mnl[200005], mnr[200005];

void solve(){
    int vouch, dur; cin >> vouch >> dur;
    vector<int>l(vouch), r(vouch), cost(vouch);
    for(int i = 0; i < vouch; i += 1){
        cin >> l[i] >> r[i] >> cost[i];
        vcl[r[i] - l[i] + 1].emplace_back(l[i], i); vcr[r[i] - l[i] + 1].emplace_back(r[i], i);
        mnl[r[i] - l[i] + 1].emplace_back(cost[i]); mnr[r[i] - l[i] + 1].emplace_back(cost[i]);
    }

    for(int i = 1; i <= 200005; i += 1){
        if(!mnl[i].empty()){
            sort(vcl[i].begin(), vcl[i].end()); sort(vcr[i].begin(), vcr[i].end());
            int m = mnl[i].size(); 
            for(int k = m - 1; k >= 0; k -= 1){
                int indexl = vcl[i][k].second, indexr = vcr[i][m - k - 1].second;
                mnl[i][k] = ((k + 1) != m?min(mnl[i][k + 1], cost[indexl]): cost[indexl]);
                mnr[i][m - k - 1] = (m - k - 1?min(mnr[i][m - k - 2], cost[indexr]): cost[indexr]); 
            }
        }
    }

    function<int(int dis, int x)>lb = [&](int dis, int x){
        int left = 0, right = vcr[dis].size() - 1, index = vcr[dis].size();
        while(left <= right){
            int mid = (left + right) >> 1;
            if(vcr[dis][mid].first >= x){
                index = mid; right = mid - 1;
            }
            else left = mid + 1;
        }

        return index;
    };

    function<int(int dis, int x)>ub = [&](int dis, int x){
        int left = 0, right = vcl[dis].size() - 1, index = vcl[dis].size();
        while(left <= right){
            int mid = (left + right) >> 1;
            if(vcl[dis][mid].first > x){
                index = mid; right = mid - 1;
            }
            else left = mid + 1;
        }

        return index;
    };

    bool yes = 0;
    int costt = INT_MAX;
    for(int i = 0; i < vouch; i += 1){
        int d = r[i] - l[i] + 1;
        if(d >= dur) continue;

        int index1 = ub(dur - d, r[i]);
        if(index1 != vcl[dur - d].size()) costt = min(costt, cost[i] + mnl[dur - d][index1]), yes = 1;
        index1 = lb(dur - d, l[i]);
        if(index1 != vcr[dur - d].size()){
            if(index1) costt = min(costt, cost[i] + mnr[dur - d][index1 - 1]), yes = 1;
        }
    }

    yes?cout << costt : cout << - 1;
    cout << '\n';
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