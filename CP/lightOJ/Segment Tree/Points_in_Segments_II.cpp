#include<bits/stdc++.h>
#define ll long long
using namespace std;

class segTree{
    vector<int>tree;
public:
    segTree(int n){
        tree.assign(4*n + 5, 0);
    }
    int query(int node, int b, int e, int i, int j){
        if()
    }

    void update(int node, int b, int e, int l, int r){
        if(b )
    }

    int query(int node, int b, int e, int i, int j){
        if(b > j || e < i) return 0;
        if(b >= i && j >= e) return tree[node];
        int mid = (b + e) >> 1, left = (node << 1), right = left | 1;
        return max(query(left, b, mid, i, j), query(right, mid + 1, e, i, j));
    }

    void update(int node, int l, int r, int index, int newValue){
        if(index > r || index < l)  return;
        if(index >= l && index <= r){
            tree[node] = newValue;
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