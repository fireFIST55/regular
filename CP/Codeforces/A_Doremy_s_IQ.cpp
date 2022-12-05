#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, iq; cin >> n >> iq;
    vector<int>contest(n), ans(n);
    for(int &i: contest) cin >> i;

    int curriq = 0;
    for(int i = n - 1; i >= 0; i -= 1){
        if(contest[i] <= curriq) ans[i] = 1;
        else if(curriq < iq)  curriq++, ans[i] = 1;
    }
    for(int i: ans) cout << i;
    cout << '\n';
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