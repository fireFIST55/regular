#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define endl '\n'

void solve(){
    ull n,g,b,mn,days=0;
    cin>>n>>g>>b;
    mn=(n+1)/2;
    if(n<=g)   days=n;
    else{
        days=mn;
        mn=(mn+g-1)/g;
        if(mn)    days+=(mn-1)*b;
        if(days<n)  days+=(n-days);
    }
    cout<<days<<endl;
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