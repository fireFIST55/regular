#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    int a,n,w,left,h=1;
    cin>>n>>w;
    multiset<int>ms;
    for(int i=0;i<n;i++){
        cin>>a;
        ms.insert(a);
    }
    left=w;
    while(!ms.empty()){
        auto it=ms.upper_bound(left);
        if(it==ms.begin()){
            left=w;
            h+=1;
        }
        else{
            it--;
            int x=*it;
            left-=x;
            ms.erase(it);
        }
    }
    cout<<h<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}