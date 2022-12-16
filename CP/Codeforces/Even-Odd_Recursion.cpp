#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ans[105];
void func(int index, int n){
    if(index > n) return;
    if(index & 1) ans[index] = 4 + ans[index - 1];
    else ans[index] = 3 + ans[index / 2];
    func(index + 1, n);
}

void solve(){
    int n; cin >> n; cout << ans[n] << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ans[0] = 1;
    func(1, 100);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}