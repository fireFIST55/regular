#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int>vec(n),pos(n),checked(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        pos[--vec[i]]=i;
    }
    for(int i=0;i<n;i++){
        for(int j=pos[i],a=i;j<n;j++,a++){
            if(checked[vec[j]]) break;
            checked[vec[j]]=1;
            if(vec[j]!=a){
                cout<<"No\n";
                return;
            }
            i=vec[j]-1;
        }
    }
    cout<<"Yes\n";
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