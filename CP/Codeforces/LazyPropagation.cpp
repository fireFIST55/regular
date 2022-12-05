#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define endl '\n'

class lazyProp{
    vector<int>vc, tree, lazy;

    void init(int node, int l, int r){
        if(l == r){
            tree[node] = vc[l];
            return;
        }
        int mid = ((l + r) >> 1), left = node<<1, right = left + 1;
        init(left, l, mid);
        init(right, mid + 1, r);

        tree[node] = tree[left] + tree[right];
    }
public:
    lazyProp(const vector<int> &v){
        vc = v;
        int n = v.size() - 1;
        tree.assign(4*n + 1, 0);
        lazy.assign(4*n + 1, 0);
        init(1, 1, n);
    }

    void update(int node, int l, int r, int x, int y, int val){
        if(x > r || y < l)  return;
        if(l >= x && r <= y){
            tree[node] += ( r - l + 1 )*val;
            lazy[node] += val;
            // Here we have just added the immediate updated value. Let's say 1 to 4's value was changed before in an array of length 7. So, to deal with that
            // We just went to the second node (2*1 + 1) we didn't go to each node 1 2 3 4. So, when we again update 3 to 4 and incase of query just consider
            // that range we get WA. As we didn't take the previous 1 to 4's update into consideration.
            return;
        }
        int mid = (l + r)>>1, left = node<<1, right = left + 1;
        update(left, l, mid, x, y, val);
        update(right, mid + 1, r, x, y, val);

        tree[node] = (tree[left] + tree[right]) + (r - l + 1)*lazy[node]; 
    }

    int query(int node, int l, int r, int x, int y, int carry){
        if(x > r || y < l) return 0;
        if(l >= x && r <= y)
            return tree[node] + (r - l + 1)*carry;
        int mid = (l + r)>>1, left = node<<1, right = left + 1;
        return query(left, l, mid, x, y, carry + lazy[node]) + query(right, mid + 1, r, x, y, carry + lazy[node]);
    }
};

void solve(){
    int n;
    cin>> n;
    vector<int>vc(n + 1);

    for(int i = 1; i<=n; i += 1)    cin>> vc[i];

    lazyProp LP(vc);

    int query;
    cin>> query;
    
    while(query--){
        int l, r, l1, r1, up;
        cin>> l>> r>> up;
        LP.update(1, 1, n, l, r, up);
        cin>> l1>> r1;
        cout<<LP.query(1, 1, n, l1, r1, 0)<<endl;
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int t = 1;
    while(t--)
        solve();

    return 0;
}