#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e5 + 9;

int a[N];

struct Node {
	Node(bool ig = false) {
		ignore = ig;
	}
	bool ignore;
	pair<int, int> lmx, rmx, mx;
};

struct ST {
    #define lc (n << 1)
    #define rc ((n << 1) + 1)
    Node t[4 * N];
    static const int inf = 1e9;

    inline void pull(int n) {
        if(t[lc].lmx.second == t[lc].rmx.second && t[lc].rmx.second == t[rc].lmx.second) {
  			t[n].lmx = {t[lc].lmx.first + t[rc].lmx.first, t[lc].lmx.second};
  		}
  		else{
       		t[n].lmx = t[lc].lmx;
  		}
        if(t[lc].rmx.second == t[rc].lmx.second && t[rc].lmx.second == t[rc].rmx.second) {
        	t[n].rmx = {t[lc].rmx.first + t[rc].rmx.first , t[lc].rmx.second};
        }
        else {
        	t[n].rmx = t[rc].rmx;
        }
        t[n].mx = max(t[lc].mx, t[rc].mx);
        if(t[lc].rmx.second == t[rc].lmx.second) {
        	t[n].mx = max({t[n].mx, {t[lc].rmx.first + t[rc].lmx.first, t[lc].rmx.second}, t[n].lmx, t[n].rmx});
        } 
    }
    inline Node combine(Node a, Node b) {
    	if(b.ignore && !a.ignore) return a;
    	if(a.ignore && !b.ignore) return b;
    	if(a.ignore && b.ignore) return Node(true);
       	Node c;
  		if(a.lmx.second == a.rmx.second && a.rmx.second == b.lmx.second) {
  			c.lmx = {a.lmx.first + b.lmx.first, a.lmx.second};
  		}
  		else{
       		c.lmx = a.lmx;
  		}
        if(a.rmx.second == b.lmx.second && b.lmx.second == b.rmx.second) {
        	c.rmx = {a.rmx.first + b.rmx.first , a.rmx.second};
        }
        else {
        	c.rmx = b.rmx;
        }
        c.mx = max(a.mx, b.mx);
        if(a.rmx.second == b.lmx.second) {
        	c.mx = max({c.mx, {a.rmx.first + b.lmx.first, a.rmx.second}, c.lmx, c.rmx});
        }
        return c;
    }
    void build(int n, int b, int e) {
        if(b == e) {
            t[n].lmx = {1, a[b]};
            t[n].rmx = {1, a[b]};
            t[n].mx = {1, a[b]};
            return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }
    
    Node query(int n, int b, int e, int i, int j) {
        if(b > j || e < i) return Node(true);
        if(b >= i && e <= j) return t[n];
        int mid = (b + e) >> 1;
        Node temp = combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
        return temp;
    }
}t;

void solve() {
	int n, c, q;
	cin >> n >> c >> q;
	for(int i = 1; i <= n; i++) cin >> a[i];
	t.build(1, 1, n);
	while(q--) {
		int x, y;
		cin >> x >> y;
		cout << t.query(1, 1, n, x, y).mx.first << '\n';
	}
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    int cs = 1;
    while(tt--) {
    	cout << "Case " << cs++ << ":" << '\n';
    	solve();
    }

    return 0;
}