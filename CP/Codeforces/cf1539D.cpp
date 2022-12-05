#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    ll a, b, cost = 0;
    vector<pair<ll, ll>>vp;

    for(int i = 0; i<n; i++){
        cin>>a>>b;
        vp.push_back({b, a});
    }
    sort(vp.begin(), vp.end());

    // cout<<endl;
    // for(int i = 0; i<n; i++)    cout<<vp[i].first<<' '<<vp[i].second<<endl;
    // cout<<endl;
    
    ll curr = 0;
    for(int i = 0, j = n-1; i<=j;){

        if(curr+vp[j].second>=vp[i].first){
            vp[j].second = (curr>=vp[i].first)? vp[j].second : (vp[j].second + curr - vp[i].first);
            cost+= vp[i].second + ((curr<vp[i].first)? (vp[i].first - curr)*2 : 0);
            curr = curr + vp[i].second + ((curr<vp[i].first)? (vp[i].first - curr): 0);
            i+=1;
        }
        else{
            cost += vp[j].second*2;
            curr += vp[j].second;
            vp[j].second = 0;
        }

        // cout<<curr<<' '<<cost<<endl;
        if(!vp[j].second)    j-=1;
    }

    cout<<cost<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();

    return 0;
}
