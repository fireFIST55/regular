#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int n;
    cin>> n;
    vector<pair<int, int>> vc;
    vector<int>a(n), b(n), seq(n);
    for(int &X: a)  cin>> X;

    int x;
    for(int i = 0; i < n; i += 1){
        cin>> b[i];
        x = a[i] + b[i];
        vc.push_back({x, i});
    }

    x = 1;
    sort(vc.begin(), vc.end(), greater<pair<int, int>>());
    for(int i = 0; i < n; i += 1){
        if(!i) seq[vc[i].second] = x;
        else    seq[vc[i].second] = (vc[i - 1].first == vc[i].first?x: ++x);
    }

    for(int i = 0; i < n; i += 1){
        int l = i - 1, r = i + 1, cnt1 = 0, cnt2 = 0;
        while(l >= 0){
            cnt1 += (seq[l--] > seq[i]);
        }

        if(cnt1 != a[i]){
            cout<< "NO\n";
            return;
        }

        while(r < n){
            cnt2 += (seq[r++] > seq[i]);
        }

        if(cnt2 != b[i]){
            cout<< "NO\n";
            return;
        }
    }

    cout<< "YES\n";
    for(int X: seq) cout<< X<< " ";
    cout<< endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while(t--)
        solve();
    
    return 0;
}