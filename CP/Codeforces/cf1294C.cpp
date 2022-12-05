#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int a,n;
    cin>>n;
    a=n;
    map<int,int>mp;
    mp[1]=1;

    vector<int>vc,ans;
    while(!(n%2)){
        n/=2;
        vc.push_back(2);
    }

    for(int i=3;i<=sqrt(n);i+=2){
        while(!(n%i)){
            n/=i;
            vc.push_back(i);
        }
    }
    if(n!=1)    vc.push_back(n);

    int x=1,y=1;
    for(int X:vc){
        y*=X;
        x*=X;
        if(!mp[x]){
            mp[x]=1;
            ans.push_back(x);
            x=1;
        }
        if(ans.size()==2){
            y=a/y;
            if(!mp[y]){
                cout<<"YES\n";
                for(int Y:ans)  cout<<Y<<' ';
                cout<<y<<endl;
                return;
            }
            break;
        }
    }
    cout<<"NO\n";
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