#include<bits/stdc++.h>
#define ll long long
using namespace std;

int M = 200 * 1000 + 1;
bool cmp(pair<int, int>a, pair<int, int>b){
    if(a.first >= b.first) return 1;
    else return 0;
}

void solve(){
    int n, k; cin >> n >> k;
    vector<int>freq(M);
    vector<pair<int, int>>khela;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; freq[a] += 1;
    }

    for(int i = 1; i < M; i += 1){
        if(freq[i]) khela.emplace_back(freq[i], i);
    }
    sort(khela.begin(), khela.end(), cmp);

    int left = 1, right = khela[0].first, count = 1;
    while(left <= right){
        int mid = (left + right) >> 1, cnt = 0;
        for(int i = 0; i < khela.size() && cnt < k; i += 1){
            if(khela[i].first < mid) break;
            else cnt += khela[i].first / mid;
        }

        if(cnt >= k){
            count = mid; left = mid + 1;
        }
        else right = mid - 1;
    }

    int taken = 0;
    for(int i = 0; i < khela.size() && taken < k; i += 1){
        for(int j = 0; j < khela[i].first/count && taken < k; j += 1){
            cout << khela[i].second << ' '; taken += 1;
        }
    }
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