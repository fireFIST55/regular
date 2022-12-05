#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,lst=-1;
    cin>>n;
    bool on=0;
    vector<int>v,vc(n),ind(n+1,0);

    for(auto &it:vc){
        cin>>it;
        ind[it]=1;
    }

    for(int i=n;i>=0;i--){
        if(!ind[i]) v.push_back(i);
    }
    for(int i=0,k=0;i<n;i++){
        if(!vc[i]){
            if(v[k]!=i+1){
                lst=i;
                vc[i]=v[k++];
                if(on)  on=0,k+=1;
            }
            else{
                if(k+1<v.size())
                    vc[i]=v[k+1],on=1;
                else{
                    vc[i]=vc[lst];
                    vc[lst]=v[k++];
                }
                lst=i;
            }
        }
    }

    for(auto X:vc)  cout<<X<<' ';
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