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
    int a, n, k, cnt = 0;
    cin>> n>> k;
    map<int, int>freq;
    deque<int>dq;
    vector<int>colors(n + 1), count(k + 1), indices[n + 1];

    for(int i = 0; i < n;  i += 1){
        cin>> a;
        if(indices[a].size() < k) indices[a].push_back(i);
        if(!freq[a])    dq.push_back(a);
        freq[a] = 1;
    }

    int i = 0;
    while(!dq.empty()){
        a = dq.front();
        dq.pop_front();
        if(i == k) i = 0, cnt += 1;

        for(int X: indices[a]){
            colors[X] = i + 1;
            i += 1;
            if(i == k) i = 0, cnt += 1;
        }
    }

    for(int i = 0; i < n; i += 1){
        count[colors[i]] += 1;
        if(count[colors[i]] > cnt)  cout<<0;
        else cout<<colors[i];
        cout<<' ';
    }
    cout<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}