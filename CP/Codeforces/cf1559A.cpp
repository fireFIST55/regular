#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n, mn;
    cin>>n;
    bool odd = 0, even = 0;

    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        if(i)   mn&=a;
        else mn = a;
    }

    cout<<mn<<endl;
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