#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, cnt = 0; cin >> n;
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; cnt += abs(vc[i]);
    }
    if(cnt & 1){
        cout << - 1 << '\n';
        return;
    }

    vector<pair<int, int>>ans;
    for(int i = 0; i < n; i += 1){
        if(!vc[i]){
            int l = i, r = i;
            while(r < n && !vc[r]) r += 1;
            r -= 1; ans.emplace_back(l + 1, r + 1); i = r;
        }
        else{
            int l = i, r = i + 1, cnt = 0;
            while(r < n && !vc[r]) r += 1, cnt += 1;
            if(r < n){
                if((!(cnt & 1) && !(-vc[r] + vc[i])) || ((cnt & 1) && !(vc[r] + vc[i]))) ans.emplace_back(l + 1, r + 1);
                else ans.emplace_back(l + 1, l + 1), ans.emplace_back(l + 2, r + 1);
                i = r;
            }
            else{
                cout << - 1 << '\n';
                return;
            }
        }
    }
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