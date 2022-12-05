#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, choice, pos; cin >> n >> pos >> choice;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;

    int ans = 0;
    choice = min(choice, pos - 1);
    for(int amifirst = 0; amifirst <= choice; amifirst += 1){
        int currAns = INT_MAX;
        for(int opfirst = 0; opfirst <= pos - 1 - choice; opfirst += 1){
            int curr = max(vc[amifirst + opfirst], vc[amifirst + opfirst + n - pos]);
            currAns = min(currAns, curr);
        }

        ans = max(ans, currAns);
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