#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;

set<int>st[N];
multiset<int>ms;

class segTree{
    vector<int>vc, tree;
    void initialization(int node, int l, int r){
        if(l == r){
            tree[node] = vc[l];
            return;
        }

        int left = node << 1, right = left + 1;
        int mid = ((r + l) >> 1);
        initialization(left, l, mid);
        initialization(right, mid + 1, r);

        tree[node] = tree[left] + tree[right];
    };
    
public:
    segTree(){}

    segTree(const vector<int> &a){
        vc = a;
        int n = vc.size() - 1;
        tree.assign(4*n + 5, 0);
        initialization(1, 1, n);
    }

    int query(int node, int l, int r, int x, int y){
        if(x > r || y < l)  return 0;
        if(l >= x && r <= y)    return tree[node];

        int left = node << 1, right = left + 1;
        int mid = ((r + l) >> 1);
        return query(left, l, mid, x, y) + query(right, mid + 1, r, x, y);
    }

    void update(int node, int l, int r, int index, int newValue){
        if(l == r){
            tree[node] = 0;
            return;
        }

        int left = node << 1, right = left + 1;
        int mid = (r + l) >> 1;
        if(index <= mid)
            update(left, l, mid, index, newValue);
        else
            update(right, mid + 1, r, index, newValue);

        tree[node] = tree[left] + tree[right];
    }
};

void solve(){
    int n; cin >> n;
    vector<int>base(n + 1);
    for(int i = 1; i <= n; i += 1){
        int a; cin >> a;
        st[a].insert(i); ms.insert(a); base[i] = 1;
    }

    segTree ST(base);

    int last = 1;
    ll moves = 0;
    while(!ms.empty()){
        auto index = st[*ms.begin()].lower_bound(last);
        if(index == st[*ms.begin()].end()){
            moves += (ll)ST.query(1, 1, n, last, n);
            last = 1;
            continue;
        }

        moves += (ll)ST.query(1, 1, n, last, *index); last = *index;
        ST.update(1, 1, n, last, 0);
        st[*ms.begin()].erase(index);
        ms.erase(ms.begin());
    }
    cout << moves << '\n';
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