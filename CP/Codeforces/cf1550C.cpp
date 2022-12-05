#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int d(int x1, int y1, int x2, int y2){
    return (abs(x1-x2) + abs(y1 - y2));
}

void solve(){
    int n, ans = 0;
    cin>>n;
    vector<int>vc(n);

    for(int &X: vc) cin>>X;
    
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){

            if(i+2<=j){
                bool ok = 1;
                for(int k1 = i; k1<j&&ok; k1++){
                    for(int k2 = k1 + 1; k2<j; k2++){
                        if(d(vc[k1], k1 + 1, vc[j], j + 1)==(d(vc[k1], k1 + 1, vc[k2], k2 + 1)+ d(vc[j], j + 1, vc[k2], k2 + 1))){
                            ok = 0;
                            break;
                        }
                    }

                }
                if(!ok) break;

            }

            ans +=1;
        }
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