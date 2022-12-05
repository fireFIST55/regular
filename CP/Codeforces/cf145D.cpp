#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1e9 + 7
#define endl "\n"
#define sync() ios_base::sync_with_stdio(false);cin.tie(NULL), cout.tie(NULL);

int_fast32_t main(){
    sync();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int> > val;
        for(int i = 2; i * i <= n; i++){
            int cnt = 0;
            while(n % i == 0){
                cnt++;
                n /= i;
            }
            if(cnt > 0) val.push_back({cnt, i});
        }
        if(n > 1) val.push_back({1, n});
        sort(val.rbegin(), val.rend());

        vector<int> ans(val[0].first, val[0].second);
        for(int i = 1; i < (int)val.size(); i++){
            for(int j = 0; j < val[i].first; j++){
                ans.back() *= val[i].second;
            }
        }
        cout<<ans.size()<<endl;
        for(auto it : ans) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}