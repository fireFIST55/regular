#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>took1, took2, left2, one, two;
    vector<ll>mem(n);
    for(ll &i: mem) cin >> i;

    ll sm = 0;
    for(int i = 0; i < n; i += 1){
        int b; cin >> b;
        if(b == 1) one.emplace_back(mem[i]);
        else two.emplace_back(mem[i]);
    }
    sort(one.rbegin(), one.rend());
    sort(two.rbegin(), two.rend());

    ll sm = 0;
    for(int i = 0; i < one.size(); i += 1){
        if(sm > k) break;
        else{
            sm += one[i]; took1.emplace_back(one[i]);
        }
    }
    for(int i = 0; i < two.size(); i += 1){
        if(sm > k) left2.emplace_back(two[i]);
        else{
            sm += two[i]; took2.emplace_back(two[i]);
        }
    }

    int index = - 1;
    ll sm1 = 0, sm2 = 0;   
    for(int i = took1.size() - 1, k = 0; i - 1 >= 0 && k < left2.size(); i -= 2, k += 1){
        sm1 += took1[i] + took1[i - 1]; sm2 += left2[k];
        if(sm1 < sm2)   index = k;
    }
    deque<pair<int, int>>ans;
    for(int i = took1.size() - 2 * k; i >= 0; i -= 1) ans.emplace_back(took1[i], 1);
    
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