#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    if(n == 3){
        cout << "1 1 3";
        return;
    }

    int odd = (n + 1)/2;
    for(int i = 0; i < odd; i += 1) cout << 1 << ' ';

    int mx = log2(n), cnt = odd;
    vector<int>prefix(mx + 1);
    for(int i = 1, curr = 2; i <= mx; i += 1, curr *= 2) prefix[i] = n/curr;
    
    int done = 0, curr = 2;
    for(int i = 1; i <= mx; i += 1){
        int m = prefix[1] - (i == mx?0: prefix[i + 1]) - done;
        for(int i = 1; i <= m && cnt < n - 1; i += 1){
            cout << curr << ' '; cnt += 1;
        }

        if(cnt == n - 1){
            int x = n/curr; cout << curr*x << ' '; cnt += 1;
        }
        curr *= 2; done += m;
    }

    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}