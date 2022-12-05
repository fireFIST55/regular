#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 1;
    int n, k; cin >> n >> k;
    if(n > k) yes = 0;
    vector<int>khelaa, khelab;
    for(int i = 0; i < 31; i += 1){
        if((n & (1 << i))) khelaa.emplace_back(i);
        if((k & (1 << i))) khelab.emplace_back(i);
    }
    if(khelaa.size() < khelab.size()) yes = 0;
    for(int i = 0; i < khelab.size(); i += 1){
        if(khelab[i] < khelaa[i]) yes = 0;
    }

    cout << (yes?"YES\n": "NO\n");
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