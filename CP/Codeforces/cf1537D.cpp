#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n, cnt = 0;
    cin>>n;
    
    if(n&1){
        cout<<"Bob\n";
        return;
    }

    while(!(n%2)){
        n/=2;
        cnt += 1;
    }

    if(n>1||!(cnt&1))   cout<<"Alice\n";
    else cout<<"Bob\n"; 
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