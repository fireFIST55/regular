#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    while(1){
        bool ok = 1;
        int curr = n;
        while(curr && ok){
            if(ok && curr%3 == 2) ok = 0;
            curr /= 3;
        }

        if(ok) break;
        n += 1;
    }

    cout << n << '\n';
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