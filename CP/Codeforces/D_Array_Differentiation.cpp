#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    int khela = 1;
    for(int i = 1; i <= n; i += 1) khela *= 3;
    for(int i = 1; i < khela; i += 1){
        int sum = 0, curr = i;
        for(int k = 0; k < n; k += 1){
            int s = curr % 3; curr /= 3;
            if(s == 2) s = - 1;
            sum += s * vc[k];
        }
        if(!sum){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}