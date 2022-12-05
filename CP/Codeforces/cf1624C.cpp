#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> vc(n), check(n + 1);
    for(int &X: vc)     cin >> X;
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i += 1){
        if(vc[i] < i + 1){
            cout << "NO\n";
            return;
        }
        else{
            bool caught = 0;
            while(vc[i] > 0){
                if(vc[i] <= n && !check[vc[i]]){
                    check[vc[i]] = 1;
                    caught = 1;
                    break;
                }

                vc[i] /= 2;
            }

            if(!caught){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}