#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll b, x, y, last = 0, sum = 0; cin >> n >> b >> x >> y;
    for(int i = 0; i < n; i += 1){
        if(last + x <= b){
            last += x; sum += last;
        }
        else{
            last -= y; sum += last;
        }
    }

    cout << sum << '\n';
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