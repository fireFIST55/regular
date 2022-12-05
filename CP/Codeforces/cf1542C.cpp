#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define mod 1000000007
#define endl '\n'

void solve(){
    ull n, lcm = 1, rem, ans = 0;
    cin>>n;
    rem = n;
    for(ull i = 2; rem>0; i++){
        lcm = (i*lcm)/(__gcd(i, lcm));
        ans = (ans+((rem - n/lcm)*i)%mod)%mod;
        rem=n/lcm;
    }

    cout<<ans<<endl;
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