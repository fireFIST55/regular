#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    bool odd = 1, even = 1;
    vector<int>vc(n);

    int mnod = INT_MAX, mnodpos, mnev = INT_MAX, mnevpos;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        if(vc[i] & 1){
            even = 0;
            if(vc[i] < mnod){
                mnod = vc[i]; mnodpos = i;
            }
        }
        else{
            odd = 0; 
            if(vc[i] < mnev){
                mnev = vc[i]; mnevpos = i;
            }
        }
    }

    vector<pair<int, int>>ans;
    if(even || odd){
        for(int i = 0; i < n - 1; i += 1) ans.emplace_back(i, n - 1);
        cout << ans.size() << '\n';
        for(pair<int, int> i: ans) cout << i.first + 1 << " " << i.second + 1 << '\n';
        return;
    }

    
    if(vc[0] & 1){
        if(mnodpos != 0) ans.emplace_back(0, mnodpos);
        if(vc[n - 1] & 1){
            ans.emplace_back(mnevpos, n - 1); vc[n - 1] = 2;
        }

        for(int i = 1; i < n; i += 1){
            if(!(vc[i] & 1)){
                ans.emplace_back(0, i); vc[i] = mnod;
            }
        }
        for(int i = 0; i < n - 1; i += 1){
            if((vc[i] & 1) && (vc[i] != mnod)) ans.emplace_back(i, n - 1);
        }
    }
    else{
        if(mnevpos != 0) ans.emplace_back(0, mnevpos);  
        if(!(vc[n - 1] & 1)){
            ans.emplace_back(mnod, n - 1); vc[n - 1] = 3;
        }
        for(int i = 1; i < n; i += 1){
            if(vc[i] & 1){
                ans.emplace_back(0, i); vc[i] = mnev;
            }
        }
        for(int i = 0; i < n - 1; i += 1){
            if(!(vc[i] & 1) && (vc[i] != mnev)) ans.emplace_back(i, n - 1);
        }
    }

    cout << ans.size() << '\n';
    for(pair<int, int> i: ans) cout << i.first + 1 << " " << i.second + 1 << '\n';
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