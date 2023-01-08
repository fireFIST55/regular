#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> kra[1000002];
int wiel[1000002];
const int mod = 1000000007;

void dfs(int n, int o) {
    wiel[n] = 1;
    for (auto v : kra[n]) {
        if (v == o)
            continue;
        dfs(v, n);
        wiel[n] += wiel[v];
    }
}

void fun() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        kra[i].clear();
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        kra[a].push_back(b);
        kra[b].push_back(a);
    }
    dfs(1, 1);
    vector<int> wierzcholki;
    for (int i = 2; i <= n; i++) {
        wierzcholki.push_back(wiel[i]*(n - wiel[i]));
    }
    sort(wierzcholki.begin(), wierzcholki.end(), greater<int>());
    int m;
    cin >> m;
    vector<int> pierwsze;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        pierwsze.push_back(a);
    }
    sort(pierwsze.begin(), pierwsze.end());
    while (pierwsze.size() > n - 1) {
        int si = pierwsze.size();
        pierwsze[si-2] *= pierwsze[si-1];
        pierwsze[si-2] %= mod;
        pierwsze.pop_back();
    }
    reverse(pierwsze.begin(), pierwsze.end());
    while (pierwsze.size() < n - 1) {
        pierwsze.push_back(1);
    }
    int result = 0;
    for (int i = 0; i < n-1; i++) {
        result += pierwsze[i] * (wierzcholki[i] % mod);
        result %= mod;
    }
    cout << result << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) fun();
}