#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int a,n;
    cin>>n;
    bool yes=1;
    vector<int>fr(100001),frq(100001);
    vector<pair<int,int>>vp;

    for(int i=0;i<n;i++){
        cin>>a;
        fr[a]+=1;
        vp.push_back({a,i});
    }
    sort(vp.begin(),vp.end());

    int od1=0,od2=0;
    for(int i=0;i<n;i++){
        int curr=vp[i].first,y=vp[i].second;
        
        frq[curr]+=1;
        od1+=i&1?1:0;
        od2+=y&1?1:0;

        if(fr[curr]==frq[curr]){
            if(od1!=od2){
                yes=0;
                break;
            }

            od1=od2=0;
        }
        // cout<<od1<<' '<<od2<<endl;
    }

    yes?cout<<"YES\n":cout<<"NO\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}