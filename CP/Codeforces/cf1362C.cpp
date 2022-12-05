#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ull unsigned long long
void solve(){
    ll n;
    cin>>n;
    ll d =n*2;
    while(n)
    {
        d-=(n%2);
        n/=2;
    }
    cout<<d<<endl;
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