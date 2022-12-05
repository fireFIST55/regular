#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct segTree{
    vector<int>tree, vc;

public:
    segTree(vector<int>a){
        vc = a;
        int n = vc.size(); tree.resize(4*n, 0);
    }

    void build(int node, int b, int e){
        if(b == e){
            tree[node] = vc[b];
            return;
        }

        int mid = (b + e) >> 1, left = node << 1, right = left | 1;
        build(left, b, mid); build(right, mid + 1, e);
        tree[node] = max(tree[left], tree[right]);
    };

    int query(int node, int b, int e, int i, int j){
        if(b > j || e < i) return 0;
        if(b >= i && j >= e) return tree[node];
        int mid = (b + e) >> 1, left = (node << 1), right = left | 1;
        return max(query(left, b, mid, i, j), query(right, mid + 1, e, i, j));
    }
};

void solve(){
    int n, m; cin >> n >> m;
    vector<int>vc(m + 5);
    for(int i = 1; i <= m; i += 1){
        cin >> vc[i];
    }

    segTree STD(vc);
    STD.build(1, 1, m);
    int q; cin >> q;
    while(q--){ 
        int r1, c1, r2, c2, k; cin >> r1 >> c1 >> r2 >> c2 >> k;
        if(c2 < c1){
            swap(c2, c1); swap(r2, r1);
        }
        int mx = STD.query(1, 1, m, c1, c2), can = ((n - r1) / k); can *= k; can = can + r1; //cout << can << endl;
        if((can <= mx) || ((c2 - c1) % k) || (can < r2) || ((can - r2) % k)) cout << "NO\n";
        else cout << "YES\n";
    }
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