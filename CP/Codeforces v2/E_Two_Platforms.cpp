#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>x(n), total(n), prefix(n);
    vector<pair<int, int>>coor;
    for(int &i: x) cin >> i;
    for(int i = 0; i < n; i += 1){
        int y; cin >> y;
        coor.emplace_back(x[i], y);
    }
    sort(coor.begin(), coor.end());
    for(int i = 0; i < n; i += 1){
        int left = i, right = n - 1, take = i;
        while(left <= right){
            int mid = (left + right) >> 1;
            if(coor[i].first + k >= coor[mid].first) left = mid + 1, take = mid;
            else right = mid - 1;
        }
        total[i] = take - i + 1;
    }

    for(int i = n - 1; i >= 0; i -= 1) prefix[i] = (i + 1 < n?max(prefix[i + 1], total[i]): total[i]);
    int ans = 1, mx = 0, next = 0;
    for(int i = 0; i < n; i += 1){
        if(mx < total[i]){
            mx = total[i]; next = i + total[i]; ans = max(ans, mx + (next < n?prefix[next]: 0));
        }
        else ans = max(ans, mx + (next < n?prefix[next]: 0));
    }
    cout << ans << '\n';
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