#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), freq(n + 3);
    for(int &i: vc){
        cin >> i; freq[i] += 1;
    }

    function<bool(int x)> check = [&](int x){
        vector<int>cnt = freq;
        priority_queue<pair<int, int>>pq;
        for(int i = 1; i <= n; i += 1){
            if(cnt[i]) pq.push({cnt[i], i});
        }

        vector<int>b;
        for(int i = 0; i < n; i += 1){
            if(i >= x && cnt[b[i - x]]){
                pq.push({cnt[b[i - x]], b[i - x]});
            }

            if(pq.empty()) return 0;
            b.push_back({pq.top().second}); pq.pop();
            cnt[b.back()] -= 1;
        }
        return 1;
    };

    int left = 1, right = n, ans = 0;
    while(left <= right){
        int mid = (left + right) >> 1;
        if(check(mid)) left = mid + 1, ans = mid;
        else right = mid - 1;
    }
    cout << ans - 1 << '\n'; 
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