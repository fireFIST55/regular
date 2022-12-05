#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    int n,dif=0,mn,mx=0;
    cin>>n;
    vector<int>vec(n+1);
    mn=n+1;
    for(int i=1;i<=n;i++){
        cin>>vec[i];
        if(i!=vec[i]){
            dif+=1;
            if(mn>vec[i])
                mn=vec[i];
            if(mx<vec[i])
                mx=vec[i];
        }
    }
    if(!dif)    cout<<0;
    else if(dif==n) cout<<1;
    else{
        dif=0;
        n=mx-mn+1;
        for(int i=mn;i<=mx;i++){
            if(i!=vec[i])   dif+=1;
        }
        if(dif==n)  cout<<1;
        else cout<<2;
    }
    cout<<endl;
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