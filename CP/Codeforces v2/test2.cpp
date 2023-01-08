#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, s; cin >> n >> s;
    vector<int>vc(n), dummy;
    for(int &i: vc) cin >> i; dummy = vc;
    do{
        bool yes = 1;
        int sm = 0;
        for(int i = 0; i < vc.size(); i += 1){
            sm += vc[i];
            if(i > 0 && i + 1 < n){
                yes = 0;
                break;
            }
        }
        if(sm != s) yes = 0;
        for(int i = 0; i < n && yes; i += 1){
            if(vc[i] > dummy[i]){
                dummy = vc;
                break;
            }
        }
    }while(next_permutation(vc.begin(), vc.end()));
    for(int i: dummy) cout << i;
    cout << endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}