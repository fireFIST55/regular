#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string s[n];
    deque<int>prob;
    map<string, int>valid;
    vector<string>vs{"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
    for(int i = 0; i < 10; i += 1) valid[vs[i]] = i;
    for(int i = 0; i < n; i += 1){
        cin >> s[i];
        if(valid[s[i]]) continue;
        prob.push_back(i);
    }

    vector<int>need(128, INT_MAX);
    vector<vector<int>>khela(128, vector<int>(7, 0));
    for(int i = 0; i < 10; i += 1){
        vector<int>vc;
        for(int k = 0; k < 7; k += 1){
            if(s[i][k] == '1') vc.push_back(k);
        }

        int m = vc.size();
        for(int k = 0; k < (1 << m) - 1; k += 1){
            int x = 0, cnt = 0;
            for(int l = 0; l < m; l += 1){
                if(k & (1 << l)) x |= (1 << l), cnt += 1;
            }
            khela[x][cnt] = max(khela[x][cnt], i); need[x] = min(need[x], m - cnt);
        }
    }

    int mn = 0;
    map<int, int>optnl;
    while(!prob.empty()){
        int x = 0, i = prob.front(); prob.pop_front();
        for(int k = 0; k < 7; k += 1){
            if(s[i][k] == '1') x |= (1 << k);
        }
        mn += need[x]; optnl[i] = need[x];
    }
    if(mn > k){
        cout << - 1 << '\n';
        return;
    }

    k -= mn;
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