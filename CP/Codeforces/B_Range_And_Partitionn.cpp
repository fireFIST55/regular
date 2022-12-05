#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n), freq(n + 5), prefix(n + 5);
    vector<pair<int, int>>ans;
    for(int &i: vc){
        cin >> i; freq[i] += 1;
    }

    function<bool(int x, int y, bool need)>khela = [&](int x, int y, bool need){
        int inside = 0, outside = 0, sbar = 0, start = 0;
        for(int i = 0; i < n; i += 1){
            if(vc[i] >= x && vc[i] <= y) inside += 1;
            else outside += 1;
            if(inside > outside && sbar < k - 1){
                if(need) ans.emplace_back(start, i);
                start = i + 1;
                inside = outside = 0; sbar += 1;
            }
        }

        bool ok = 0;
        if(sbar == k - 1 && inside > outside){
            if(need) ans.emplace_back(start, n - 1);
            ok = 1;
        }
        return ok;
    };
    for(int i = 1; i <= n; i += 1){
        prefix[i] = (i?prefix[i - 1]: 0) + freq[i];
        if(freq[i] == n){
            cout << i << " " << i << '\n';
            khela(i, i, 1);
            for(pair<int, int>pi: ans) cout << pi.first + 1 << ' ' << pi.second + 1<< '\n';
            return;
        }
    }

    int take = - 1, left = 1, right = n, l, r;
    while(left <= right){
        int mid = (left + right) >> 1;
        bool yes = 0;
        for(int i = 1, j = i + mid - 1; i + mid - 1 <= n && !yes; i += 1, j += 1){
            if(prefix[j] - prefix[i - 1] > n / 2){
                if(khela(i, j, 0)){
                    yes = 1; l = i, r = j;
                }
            }
        }

        if(yes) right = mid - 1, take = mid;
        else left = mid + 1;
    }
    cout << l << " " << r << '\n';
    khela(l, r, 1);
    for(pair<int, int>pi: ans) cout << pi.first + 1 << " " << pi.second + 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}