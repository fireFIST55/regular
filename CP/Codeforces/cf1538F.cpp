#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    int l,r;
    ll cnt=0;
    cin>>l>>r;
    while(l||r){
        cnt+=r-l;
        r/=10;
        l/=10;
    }
    cout<<cnt<<endl;
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