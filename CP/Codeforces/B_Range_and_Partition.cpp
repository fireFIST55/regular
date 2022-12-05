#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n), prefix(n + 5);
    for(int &i: vc){
        cin >> i; prefix[i] += 1;
    }
    for(int i = 1; i <= n; i += 1) prefix[i] += prefix[i - 1];
    int l = 1, r = n + 5;
    for(int i = 1; i <= n; i += 1){
        int left = i, right = n, take = - 1;
        while(left <= right){
            int mid = (left + right) >> 1;
            if(prefix[mid] - prefix[i - 1] >= (n + k + 1) / 2){
                take = mid; right = mid - 1;
            }
            else left = mid + 1;
        }
        if(take != - 1){
            if(r - l + 1 >= take - i + 1){
                l = i, r = take;
            }
        }
    }
    vector<int>khela(n);
    vector<pair<int, int>>ans;
    int start = 0;
    for(int i = 0; i < n; i += 1){
        khela[i] = (i?khela[i - 1]: 0) + (vc[i] >= l && vc[i] <= r?1: - 1);
        if(khela[i] > 0 && ans.size() < k - 1){
            ans.emplace_back(start, i); start = i + 1; khela[i] = 0;
        }
    }
    ans.emplace_back(start, n - 1);
    cout << l << " " << r << '\n'; 
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