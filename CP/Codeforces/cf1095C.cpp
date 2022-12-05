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
    int n, k;
    cin>> n>> k;
    queue<int>q;
    map<int, int>freq;

    for(int i = 0; i < 31; i += 1){
        if(n & (1<< i)){
            if(i) q.push((1<<i));
            freq[(1<< i)] += 1;
        }
    }

    int sz = freq.size();
    if(sz > k){
        cout<< "NO\n";
        return;
    }

    while(sz < k && !q.empty()){
        int a = q.front();
        q.pop();
        freq[a] -= 1;
        freq[a/2] += 2;
        sz += 1;

        if(a/2 > 1){
            q.push(a/2);
            q.push(a/2);
        }
    }

    if(sz < k){
        cout<<"NO\n";
        return;
    }

    cout<< "YES\n";
    for(auto it: freq){
        for(int i = 0; i < it.second; i += 1)   cout<< it.first<< " ";
    }
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