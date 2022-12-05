#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    bool yes=1;
    bool mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch;
            cin>>ch;
            mat[i][j]=ch-'0';
        }
    }
    for(int i=n-2;i>=0&&yes;i--){
        for(int j=n-2;j>=0&&yes;j--){
            if(mat[i][j]&&!mat[i+1][j]&&!mat[i][j+1]){
                yes=0;
                break;
            }
        }
    }
    yes?cout<<"YES\n":cout<<"NO\n";
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