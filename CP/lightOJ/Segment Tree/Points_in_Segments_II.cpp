#include<bits/stdc++.h>
#define ll long long
using namespace std;

class segTree{
    vector<int>tree;
public:
    segTree(int n){
        tree.assign(4 * n + 5, 0);
    }

    void update(int node, int b, int e, int index, int value){
        if(b == e && index == b){
            tree[node] += value;
            return;
        }
        int mid = (b + e) >> 1, left = node << 1, right = left | 1;
        update(left, b, mid, index, value); update(right, mid + 1, e, index, value);
        tree[node] = tree[left] + tree[right];
    }

    int query(int node, int b, int e, int index){
        if(b > index || e < index) return 0;
        if(b == e && index == b)    return tree[index];
        int mid = (b + e) >> 1, left = node << 1, right = left | 1;
        return (query(left, b, mid, index) + query(right, mid + 1, e, index));
    }
};

void solve(){
    int n, q, cnt = 1; cin >> n >> q;
    vector<int>query(q), khela;
    map<int, int>index;
    vector<pair<int, int>>points, seg;
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v;
        points.emplace_back(u, v); khela.emplace_back(u); khela.emplace_back(v);
    }
    for(int &i: query) cin >> i, khela.emplace_back(i);
    sort(khela.begin(), khela.end());
    for(int i = 0; i < khela.size(); i += 1){
        if(!index[khela[i]]) index[khela[i]] = cnt++;
    }
    for(pair<int, int>pi: points){
        seg.emplace_back(index[pi.first], 1); seg.emplace_back(index[pi.second], - 1);
    }
    for(int i: query) seg.emplace_back(index[i], 0);
    sort(seg.begin(), seg.end());
    vector<int>ans(n + 5); segTree ST(n);
    for(int i = 0; i < seg.size(); i += 1){
        if(seg[i].second)
            ST.update(1, 1, n, seg[i].first, seg[i].second);
        else ans[seg[i].first] = ST.query(1, 1, n, seg[i].first);
    }
    for(int i: query) cout << ans[index[i]] << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i += 1){
        cout << "Case " << i << ":"; solve();
    }
    
    return 0;
}