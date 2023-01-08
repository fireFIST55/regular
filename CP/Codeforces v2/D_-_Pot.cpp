#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mx = 1e5;
vector<int>pr{2, 3, 5, 7};
const int N = 10;
ll arr[mx];
struct info {
    int prime = 0, cnt = 0;
    int khela[10] = {0};
    bool avail
} tree[mx * 4];

void update(int node, int b, int e, int i, int j, int p)
{
    if (i > e || j < b)
        return;
    if(b <= i && e >= j){
        if(khela[])
    }
    if (b >= i && e <= j) 
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x; 
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].cnt;

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);

    return max(p1, p2);
}

void solve(){
    int n, q; cin >> n >> q;
    for(int i = 0; i < q; i += 1){
        string s; cin >> s;
        if(s == "MULTIPLY"){
            int l, r, p; cin >> l >> r >> p; update(1, 1, n, l, r, p);
            cout << "done\n";
        }
        else{
            int l, r; cin >> l >> r;
            cout << "ANSWER " << query(1, 1, n, l, r) << '\n';
        }
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