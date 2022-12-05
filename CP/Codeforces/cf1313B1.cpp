#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n;
    ll mx=0;
    cin>>n;
    vector<int>a(n),ans;
    for(int &x:a)  cin>>x;

    for(int i=0;i<n;i++){
        vector<int>v=a;
        ll mxx=0;
        for(int j=i-1;j>=0;j--){
            v[j]=min(v[j],v[j+1]);
            mxx+=(ll)v[j];
        }
        
        for(int j=i+1;j<n;j++){
            v[j]=min(v[j],v[j-1]);
            mxx+=(ll)v[j];
        }
        mxx+=v[i];
        if(mxx>mx)
            ans=v,mx=mxx;
    }
    for(int X:ans)  cout<<X<<' ';
    cout<<endl;  
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();

    return 0;
}