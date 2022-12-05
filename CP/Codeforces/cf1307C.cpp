#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    string s;
    cin>>s;
    ll ans=0;
    map<int,ll>mp;
    vector<vector<ll>>vc(26,vector<ll>(26,0));
    for(auto C: s){
        mp[C]+=1;
        ans=max({mp[C],ans});
    }

    for(auto C:s){
        for(auto B: mp){
            if(B.first==C){
                vc[C-'a'][B.first-'a']+=B.second-1;
                ans=max({vc[C-'a'][B.first-'a'],ans});
            }
            else{
                vc[C-'a'][B.first-'a']+=B.second;
                ans=max({vc[C-'a'][B.first-'a'],ans});
            }
        }
        mp[C]-=1;
    }
    
    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();

    return 0;
}