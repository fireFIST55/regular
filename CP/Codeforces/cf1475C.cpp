#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define endl '\n'
void solve(){
    int a,b,k,x;
    ull count=0;
    cin>>a>>b>>k;
    vector<ull>ax(k),by(k),a1(a+5),b1(b+5);
    for(int i=0;i<k;i++){
        cin>>ax[i];
        a1[ax[i]]+=1;
    }
    map<pair<ull,ull>,ull>mp;
    for(int i=0;i<k;i++){
        cin>>by[i];
        b1[by[i]]+=1;
        mp[{ax[i],by[i]}]+=1;
    }
    for(int i=0;i<k;i++){
        a1[ax[i]]-=1;
        b1[by[i]]-=1;
        mp[{ax[i],by[i]}]-=1;
        count+=((k-i-1)-(a1[ax[i]]+b1[by[i]]-mp[{ax[i],by[i]}]));
    }
    cout<<count<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}