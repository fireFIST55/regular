#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    int mx = *max_element(vc.begin(), vc.end());
    int count = accumulate(vc.begin(), vc.end(), 0);
    if(2 * mx > count || count & 1) cout << "T\n";
    else cout << "HL\n";
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