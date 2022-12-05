#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, n, k; cin >> n >> k;
    vector<int>vp;
    map<int, int>freq;
    for(int i = 0; i < n; i += 1){
        cin >> a; freq[a] += 1;
        if(freq[a] == 1) vp.push_back(a);
    }

    sort(vp.begin(), vp.end());
    n = vp.size();
    int l = 0, r =  - 1;
    for(int i = 0; i < n; i += 1){
        if(freq[vp[i]] >= k){
            int l1 = vp[i], r1 = vp[i], prev = vp[i];
            while(i < n && freq[vp[i]] >= k && (vp[i] - prev) <= 1){
                prev = vp[i]; r1 = vp[i++];
            }

            if(r1 - l1 >= r - l){
                r = r1; l = l1;
            }
        }
    }

    if(r == -1) cout << - 1 << '\n';
    else cout << l << " " << r << "\n";
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