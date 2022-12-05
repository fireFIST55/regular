#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n,d=0,k=0;
    string str;
    cin>>n>>str;
    map<pair<int,int>,int>mp;
    for(int i=0;i<n;i++){
        if(str[i]=='D') d+=1;
        else    k+=1;
        int gcd=__gcd(d,k);
        mp[{d/gcd,k/gcd}]++;
        cout<<mp[{d/gcd,k/gcd}]<<' ';
    }
    cout<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}