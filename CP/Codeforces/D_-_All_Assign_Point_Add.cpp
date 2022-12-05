#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    vector<int>lastchecked(n);
    for(ll &i: vc) cin >> i;
    int q, last3 = - 1, value = 0; cin >> q;
    for(int i = 1; i <= q; i += 1){
        int t; cin >> t;
        if(t == 1){
            ll add; cin >> add;
            last3 = i; value = add;
        }
        else if(t == 2){
            int index; ll add; cin >> index >> add;
            if(lastchecked[--index] > last3) vc[index] += add;
            else vc[index] = value + add;
            lastchecked[index] = i;
        }
        else{
            int index; cin >> index; 
            if(lastchecked[--index] < last3)  vc[index] = value;
            cout << vc[index] << '\n';
            lastchecked[index] = i;
        }
    }
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