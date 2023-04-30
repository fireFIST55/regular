#include<bits/stdc++.h>
#define ll long long
using namespace std;
class segTree{
public:
    vector<int>vc, tree;
    segTree(const vector<int> &a, int m){
        vc = a;
        int n = vc.size() - 1;
        tree.assign(4 * n + 5, 0);
        build(1, 1, n, m);
    }

    void build(int node, int b, int e, int level){
        if(b == e){
            tree[node] = vc[b];
            return;
        }

        int mid = (b + e) >> 1, left = node << 1, right = left | 1;
        build(left, b, mid, level - 1); build(right, mid + 1, e, level - 1);
        tree[node] = (level & 1)?tree[left] | tree[right]: tree[right] ^ tree[left];
    }

    void update(int node, int b, int e, int index, int value, int level){
        if(index < b || index > e) return;
        if(b == e && index == b){
            tree[node] = value;
            return;
        }
        int mid = (b + e) >> 1, left = node << 1, right = left | 1;
        update(left, b, mid, index, value, level - 1); update(right, mid + 1, e, index, value, level - 1);
        tree[node] = (level & 1)?tree[left] | tree[right]: tree[left] ^ tree[right];
    }
};

void solve(){
    int n, m; cin >> n >> m;
    vector<int>vc((1 << n) + 1);
    for(int i = 1; i <= (1 << n); i += 1) cin >> vc[i];
    segTree ST(vc, n);
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        ST.update(1, 1, (1 << n), u, v, n); cout << ST.tree[1] << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}