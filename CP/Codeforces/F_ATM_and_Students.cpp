#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int n, m;
    cin >> n >> m;
    int s = m;
    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int I = 0, J = 0;
    int maxx = 0;
    while (J < n) {
        s += vec[J];
        if (s < 0) {
            while (I <= J) {
                s -= vec[I]; I++;
                if (s >= 0)break;
            }
            if (I > J) {
                J++; continue;
            }
        }
        maxx = max(maxx, J - I + 1);
        J++;
    }
    if (!maxx) {
        cout << -1 << endl; return;
    }

    I = 0, J = 0;
    s = m;
    int maxx1 = 0;
    while (J < n) {
        s += vec[J];
        if (s < 0) {
            while (I <= J) {
                s -= vec[I]; I++;
                if (s >= 0)break;
            }
            if (I > J) {
                J++; continue;
            }
        }
        // cout<<I<<" "<<J<<endl;
        maxx1 = max(maxx1, J - I + 1);
        if (maxx1 == maxx) {
            cout << I + 1 << " " << J + 1 << endl; return;
        }
        J++;
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        solve();
    }
    return 0;

}