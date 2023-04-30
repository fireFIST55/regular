#include<bits/stdc++.h>
#define ll long long
using namespace std;

class segTree{
public:
    vector<ll>tree;
    segTree(int n){
        tree.assign(4*n + 5, 0);
    }

    int query(int node, int b, int e, int index){
        if(e == index) return tree[node];
        int mid = (b + e) >> 1, left = (node << 1), right = left | 1;
        if(b <= index && mid >= index) return query(left, b, mid, index);
        else return query(right, mid + 1, e, index);
    }

    void update(int node, int l, int r, int index, ll newValue){
        if(index > r || index < l)  return;
        if(l == r && index == l){
            cout << "node: " << node << endl;
            tree[node] += newValue;
            return;
        }

        int left = node << 1, right = left + 1;
        int mid = (r + l) >> 1;
        update(left, l, mid, index, newValue);
        update(right, mid + 1, r, index, newValue);

        tree[node] = tree[left] + tree[right];
    }
};

void solve(){
    int n, q; cin >> n >> q;
    vector<string>vc(n);
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; vc[i] = to_string(a);
    }
    segTree ST(n);
    for(int i = 0; i < q; i += 1){
        int typ; cin >> typ;
        if(typ == 1){
            cout << "index: " << i << endl;
            int l, r; cin >> l >> r;
            ST.update(1, 1, n, l, 1);
            if(r != n) ST.update(1, 1, n, r + 1, - 1);
        }
        else{
            int in; cin >> in;
            //cout << ST.query(1, 1, n, in) << endl << endl;
        }
    }
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