#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    string s, a, b; 
    cin>>s;

    for(int i = 0; s[i]; i += 1){
        if(i&1) a += s[i];
        else b += s[i];   
    }

    if(a.empty())
        cout<<(stoi(b) - 1);
    else
        cout<<(stoi(a) + 1)*(stoi(b) + 1) - 2;
    
    cout<<endl;
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