#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;

    int m; cin >> m;
    vector<int>mxlevel(n + 1);
    for(int i = 0; i < m; i += 1){
        int p, s; cin >> p >> s;
        mxlevel[s] = max(mxlevel[s], p);
    }
    for(int i = n - 1; i; i -= 1){
        mxlevel[i] = max(mxlevel[i + 1], mxlevel[i]);
    }

    int kills = 0, days = 0, mx = 0;
    for(int i = 0; i < n; i += 1){
        if(mxlevel[kills + 1] >= max(mx, vc[i])){
            kills += 1; mx = max(mx, vc[i]);
            if(i == n - 1) days += 1;
        }
        else{
            if(!kills){
                cout << - 1 << '\n';
                return;
            }
            else{
                mx = 0;
                days += 1; kills = 0; i -= 1;
            }
        }
    }

    cout << days << '\n';
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