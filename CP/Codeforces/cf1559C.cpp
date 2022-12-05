#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    bool ok = 0;
    
    vector<int>vc(n), ans(n+1);

    for(int &X: vc) cin>>X;

    if(!vc[n-1]){
        for(int i = 1; i<=n+1; i++) cout<<i<<' ';
        cout<<endl;
    }
    else{
        int k = 0;
        for(int i = 1; i<=n; i++){
            if(!ok){
                if(!vc[i-1]&&i<n&&vc[i]){
                    ans[k++] = i;
                    ans[k++] = n + 1;
                    ok = 1;
                }
                else if(i==1&&vc[i-1]){
                    ans[k++] = n + 1;
                    ans[k++] = i;
                    ok = 1;
                }
                else    ans[k++] = i;
            }
            else{
                ans[k++] = i;
            }
        }
        if(ok){
            for(int X: ans) cout<<X<<' ';
            cout<<endl;
        }
        else
            cout<<-1<<endl;
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