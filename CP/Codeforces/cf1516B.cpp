#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n,x=0;
    cin>>n;
    vector<int>el(n);
    for(auto &it:el)    cin>>it;
    for(int i=0;i<n;i++){
        x^=el[i];
        int y=0;
        bool yep=0;
        for(int j=i+1;j<n;j++){
            y^=el[j];
            if(x==y)
                y=0,yep=1;
        }
        if(!y&&yep){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}