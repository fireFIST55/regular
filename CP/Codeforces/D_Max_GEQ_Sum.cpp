#include<bits/stdc++.h>
#define ll long long
using namespace std;

class segTree{
    vector<ll>vc, tree;
public:
    segTree(const vector<ll> a){
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
        tree[node] = tree[left] + tree[right];
    };

    ll query(int node, int b, int e, int i, int j){
        if(j < b || e < i) return LONG_MIN;
        else if(b >= i && e <= j) return tree[node];
        int mid = (b + e) >> 1, left = node << 1, right = left + 1;
        ll mx = max(query(left, b, mid, i, j), query(right, mid + 1, e, i, j));
        cout << "i: " << b << " " << e << " " << i << " " << j << " " <<mx << endl;
        return mx;
    }
};

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;

    vector<ll>prefix(n), suffix(n);
    vector<int>prev(n), next(n);
    function<void()>prevGen = [&](){
        stack<int>khela;
        for(int i = 0; i < n; i += 1){
            prev[i] = i + 1;
            while(!khela.empty() && vc[khela.top()] < vc[i]){
                prev[i] = khela.top() + 1; khela.pop();
            }
            if(khela.empty()) prev[i] = 1;
            khela.push(i);
        }
    };

    function<void()>nextGen = [&]{
        stack<int>khela;
        for(int i = n - 1; i >= 0; i -= 1){
            next[i] = i + 1;
            while(!khela.empty() && vc[khela.top()] < vc[i]){
                next[i] = khela.top() + 1; khela.pop();
            }
            if(khela.empty()) next[i] = n;
            khela.push(i);
        }
    };
    prevGen(); nextGen();

    bool yes = 1;
    for(int i = 0; i < n; i += 1)   prefix[i] = (i?prefix[i - 1]: 0) + vc[i];
    for(int i = n - 1; i >= 0; i -= 1) suffix[i] = (i < n - 1?suffix[i + 1]: 0) + vc[i];
    segTree stP(prefix); segTree stS(suffix);
    // for(int i: prefix) cout << i << ' ';
    // cout << endl;
    // for(int i: suffix) cout << i << ' ';
    // cout << endl << endl;
    for(int i: prev) cout << i << " ";
    cout << endl;
    for(int i: next) cout << i << " ";
    cout << endl;
    for(int i = 0; i < n; i += 1){
        ll left = stS.query(1, 1, n, prev[i], i + 1);
        ll right = stP.query(1, 1, n, i + 1, next[i]);
        cout << left << " " << right << endl;
        if(max(left, right) > 0) yes = 0;
    }
    yes?cout << "YES\n": cout << "NO\n";
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