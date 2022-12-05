#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define endl '\n'

void solve(){
    ull a=0;
    map<ull,int>mp;
    double n=10000;
    while(n){
        double n1,pwd=(log(n)/log(3));
        ull pw=pwd;
        cout<<pw<<' ';
        n1=(pow(3,pw)+.0000001);
        a+=n1;
        pw=n1;
        n-=pw;
        cout<<n<<endl;
    }
    cout<<a<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)  
        solve();

    return 0;
}