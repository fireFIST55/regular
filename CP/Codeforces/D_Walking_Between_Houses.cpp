#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll n, moves, dis, curr = 1; cin >> n >> moves >> dis;
    vector<ll>path;
    if(moves > dis){
        cout << "NO\n";
        return;
    }

    while(dis && moves){
        if(dis > moves){
            ll left = 1, take = 1, right = n - 1;
            while(left <= right){
                ll mid = (left + right) / 2;
                if(dis >= mid && dis - mid >= moves - 1){
                    left = mid + 1; take = mid;
                }
                else right = mid - 1;
            }
            // cout << take << ' ';
            if(curr + take > n) curr -= take;
            else curr += take;

            dis -= take;
            path.emplace_back(curr);
        }
        else{
            // cout << 1 << " ";
            if(curr + 1 <= n) curr += 1;
            else curr = n - 1; dis -= 1;

            path.emplace_back(curr);
        }

        moves -= 1;
    }
    // cout << endl;
    
    if(dis){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(ll i: path) cout << i << ' ';
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