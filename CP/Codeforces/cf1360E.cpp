#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    bool yes=1;
    string mat[n];
    for(int i=0;i<n;i++)
        cin>>mat[i];
    for(int i=n-1;i>=0&&yes;i--){
        bool have=false;
        for(int j=n-1;j>=0&&yes;j--){
            if(mat[j][i]=='1'){
                if(j!=n-1&&!have){
                    for(int k=n-1;k>=i;k--){
                        if(mat[j][k]!='1'){
                            yes=0;
                            break;
                        }
                    }
                }
                have=1;
            }
            else    have=0;
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