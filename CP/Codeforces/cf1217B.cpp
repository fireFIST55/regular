#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int blows, heads, curr = 0, finishB = 0; cin >> blows >> heads;
    map<int, int>aseNaki;

    for(int i = 0; i < blows; i += 1){
        int pw, nh; cin >> pw >> nh;

        finishB = max(finishB, pw);
        curr = max(curr, pw - nh);
    }

    if(!curr && finishB < heads){
        cout << - 1 << '\n';
        return;
    }

    int ans = curr?(1 + (max(0, (heads - finishB) + curr - 1)/curr)): 1;
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