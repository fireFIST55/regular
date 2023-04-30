#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>a(n), vis(N), freq(N), cand;
    vector<pair<int, int>>khela;
    for(int &i: a){
        cin >> i; vis[i] = 1;
    }
    if(m == 1){
        cout << 0 << '\n';
        return;
    }
    for(int i = 2; i <= m; i += 1){
        int x = m / i;
        if(x <= 1) cand.emplace_back(i);
    }
    int cnt = 0;
    bool yes;
    for(int p: cand){
        yes = 0;
        for(int i = p; i < N; i += p){
            if(vis[i]){
                yes = 1;
                khela.emplace_back(i, cnt);
            }
        }
        cnt += 1;
        if(!yes) break;
    }

    int ans = INT_MAX;
    sort(khela.begin(), khela.end());
    deque<pair<int, int>>dq; int curr = 0;
    for(int i = 0; i < khela.size() && yes; i += 1){
        if(!freq[khela[i].second]) curr += 1;
        dq.push_back(khela[i]);
        freq[khela[i].second] += 1;
        if(curr == cnt){
            while(!dq.empty()){
                if((freq[dq.front().second] - 1) == 0) break;
                else{
                    freq[dq.front().second] -= 1;
                    dq.pop_front();
                }
            }
            ans = min(ans, dq.back().first - dq.front().first);
            freq[dq.front().second] -= 1; curr -= 1;
            dq.pop_front();
        }
    }
    if(yes) cout << ans << '\n';
    else cout << - 1 << '\n';
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