#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>> n;
    string a = "()", b = "(())";
    for(int i = 0, k = 0; i<n; i += 1){
        if(!i){
            for(int j = 0; j<n; j += 1) cout<<a;
            cout<<endl;
        }
        else{
            for(int j = 0; j<n-1; j += 1){
                if(j == k)  cout<<b;
                else cout<<a;
            }
            cout<<endl;

            k += 1;
        }
    }
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