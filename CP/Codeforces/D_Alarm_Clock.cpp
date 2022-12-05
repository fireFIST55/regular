#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k, ans = 0; cin >> n >> m >> k;
    vector<int>alarm(n);
    for(int &i: alarm) cin >> i;
    sort(alarm.begin(), alarm.end());
    deque<int>pq;

    for(int i = 0; i < n; i += 1){
        while(!pq.empty()){
            int x = pq.front();
            if(x < alarm[i] - m + 1) pq.pop_front();
            else break;
        }

        if(pq.size() > k - 2){
            int l = (int)pq.size() - k + 2; ans += l;
            for(int j = 0; j < l - 1; j += 1) pq.pop_back();
        }
        else{
            if(pq.size() + 1 <= k - 1)  pq.push_back(alarm[i]);
            else ans += 1;
        }
    }
    cout << ans << '\n';
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