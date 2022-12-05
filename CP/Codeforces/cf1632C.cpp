#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int ans = b - a;
    
    for(int i = 0; i < b - a; i += 1){
        if(((a + i)|b) == b){
            ans = min(ans, i + 1);
            break;
        }

        if((a|(b + i)) == (b + i)){
            ans = min(ans, i + 1);
            break;
        }
    }

    cout << ans << '\n';
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