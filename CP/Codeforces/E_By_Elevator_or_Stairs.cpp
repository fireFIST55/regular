#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int flr, c; cin >> flr >> c;
    vector<int>a(flr - 1), b(flr - 1);
    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;

    vector<int>lft(flr + 1), str(flr + 1), ans(flr + 1);
    for(int i = 2; i <= flr; i += 1){
        lft[i] = (i == 2?c + b[i - 2]: min(lft[i - 1] + b[i - 2], str[i - 1] + c + b[i - 2]));
        str[i] = (i == 2?a[i - 2]: min(str[i - 1] + a[i - 2], lft[i - 1] + a[i - 2]));
        ans[i] = min(lft[i], str[i]);
    }

    for(int i = 1; i <= flr; i += 1) cout << ans[i] << ' ';
    cout << '\n'; 
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