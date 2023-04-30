#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    if(n == 1){
        cout << (vc[0] & 1?"sjfnb": "cslnb") << '\n';
        return;
    }

    int cnt2 = 0;
    ll khela = 0; bool yes = 1;
    sort(vc.begin(), vc.end());
    map<int, int>freq;
    for(int i = 0; i < n && yes; i += 1){
        freq[vc[i]] += 1; cnt2 += (freq[vc[i]] > 1);
        if(vc[i] < i || freq[vc[i]] > 2 || cnt2 > 1 || (vc[i]?freq[vc[i]] > 1 && freq[vc[i] - 1]: 0)) yes = 0; 
        khela += (vc[i] - i);
    }
    cout << ((!yes || !(khela & 1))?"cslnb\n": "sjfnb\n");
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