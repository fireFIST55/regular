#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,pos=-1;
    cin>>n;
    vector<int>vc(n);
    for(int &X:vc)  cin>>X;

    for(int i=31;i>=0;i--){
        int cnt=0;

        for(int j=0;j<n;j++){
            if(vc[j]&(1<<i))    cnt+=1,pos=j;
        }
        if(cnt==1)  break;
    }
    if(pos!=-1) swap(vc[pos],vc[0]);

    for(int X:vc)   cout<<X<<' ';
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