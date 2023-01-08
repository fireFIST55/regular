#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<ll>vc(n), prefix(m);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        if(i < m) prefix[i] += (i? prefix[i - 1]: 0) + vc[i];
    }
    int oper = 0;
    priority_queue<ll>prev, suff;
    if(vc[m - 1] > 0) prev.push(vc[m - 1]); 
    for(int i = m - 2; i >= 0; i -= 1){
        if(prefix[i] >= prefix[m - 1]){
            //cout << "ekhane\n";
            if(vc[i] > 0) prev.push(vc[i]);
            continue;
        }
        while(prefix[i] < prefix[m - 1] && !prev.empty()){
            oper += 1;
            prefix[m - 1] -= (ll)2 * prev.top(); prev.pop();
        }
        if(vc[i] > 0) prev.push(vc[i]);
        //cout << prefix[i] << " " << prefix[m - 1] << '\n';
    }

    ll curr = 0;
    for(int i = m; i < n; i += 1){
        curr += vc[i];
        if(vc[i] < 0) suff.push(-vc[i]);
        while(curr < 0 && !suff.empty()){
            curr += (ll)2 * suff.top(); suff.pop(); oper += 1;
        }
    }
    cout << oper << '\n';
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