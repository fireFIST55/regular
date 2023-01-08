#include<bits/stdc++.h>
#define ll long long
using namespace std;

class segTree{
    vector<int>vc, tree;
public:
    segTree(const vector<int> &a){
        vc = a;
        int n = vc.size() - 1;
        tree.assign(4*n + 5, 0);
        build(1, 1, n);
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
    bool no = 0;
    int n; cin >> n;
    vector<int>vc(n), dc(n + 1), cr, nd;
    map<int, int>have, last;
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; 
        if(a > vc[i]) no = 1;
        dc[i + 1] = a;
    }
    int m; cin >> m;
    for(int i = 0; i < m; i += 1){
        int a; cin >> a;
        have[a] += 1;
    }
    for(int i = 1; i <= n; i += 1){
        if(!have[dc[i]] && dc[i] != vc[i - 1]){
            no = 1;
        }
    }
    //cout << "1 " << no << endl;
    segTree st(dc); int k = nd.size();
    for(int i = 1; i <= n && !no; i += 1){
        if(dc[i] == vc[i - 1]) continue;
        int l = last[dc[i]];
        if(!l) have[dc[i]] -= 1;
        else{
            int mx = st.query(1, 1, n, l, i);
            //cout << nd[i] << " mx: " << mx << endl << endl;
            if(mx > dc[i]){
                if(!have[dc[i]]) no = 1;
                else have[dc[i]] -= 1;
            }
        }
        last[dc[i]] = i;
    }
    cout << (no?"NO\n": "YES\n");
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