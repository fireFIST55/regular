#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int f, d, mx;
    cin >> f >> d;
    mx = (d + 1)/2;
    vector<pair<int, int>>sz;
    vector<int>av[d], ans(d), freq(f + 1), used(f + 1);
    
    for(int i = 0; i < d; i += 1){
        int a;
        cin >> a;
        sz.emplace_back(a, i);
        for(int j = 0; j < a; j += 1){
            int k;  cin >> k;
            av[i].push_back(a);
        }
    }

    sort(sz.begin(), sz.end());
    for(int i = 0; i < d; i += 1){
        int index = sz[i].second, curr = d + 10, chosen = - 1;
        for(int x: av[index]){
            if(used[x] < mx){
                int rem = mx - used[x];
                rem = min(rem, freq[x]);
                if(rem < curr){
                    curr = rem; chosen = x;
                }
            }
        }

        if(chosen == -1){
            cout << "NO\n"; return;
        }

        used[chosen] += 1; ans[index] = chosen;
    }

    cout << "YES\n";
    for(int i: ans) cout << i << ' ';
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}