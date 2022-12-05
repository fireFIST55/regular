#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    bool no=0;
    string s,t;
    cin>>s >>t;
    int n = s.length(), m = t.length();

    for(int i = n-1, j = m-1; i >=0, j >=0; j--){
        while(i>=0&&s[i] != t[j])
            i-=2;
        if(i<0||(!i&&j>=0)) no = 1;

        j-=1;
    }
    
    no?cout<<"NO\n":cout<<"YES\n";
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