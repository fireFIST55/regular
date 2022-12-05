#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    string s, a = "RGB", b = "GBR", c = "BRG";
    int n, k, ans = INT_MAX;
    cin>>n>>k>>s;

    for(int i = 0; i<n; i++){
        bool calc = 0;
        int l = 0, x = 0, y = 0, z = 0;
        for(int j = i; i+k-1<n&&j<i+k; j++, l++){
            calc = 1;
            if(a[l]!=s[j])  x+=1;
            if(b[l]!=s[j])  y+=1;
            if(c[l]!=s[j])  z+=1;

            if(l==2)    l=-1;
        }
        // cout<<x<<' '<<y<<' '<<z<<endl;
        if(calc)    ans= min({ans, x, y, z});
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