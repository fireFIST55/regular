#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s, str = "RLUD"; cin >> s;
    vector<int>mark(26), vct(4); 
    for(int i = 0; i < 4; i += 1) mark[s[i] - 65] = i;
    vector<vector<int>>khela(n, vector<int>(4, 0));
    int x, y, X = 0, Y = 0; cin >> x >> y;
    (x >= 0?vct[0] += x: vct[1] += (-x));
    (y >= 0?vct[2] += y: vct[3] += (-y));

    for(int i = 0; i < n; i += 1){
        X += (s[i] == 'R'); X -= (s[i] == 'L'); Y += (s[i] == 'U'); Y -= (s[i] == 'D');
        khela[i][mark[s[i] - 65]] = 1;
        if(!i) continue;
        for(int k = 0; k < 4; k += 1) khela[i][k] += khela[i - 1][k];
    }
    function<void(vector<int>&vc, int left, int right)>calc = [&](vector<int>&vc, int left, int right){
        if(left > right || left < 0 || right >= n) return;
        for(int i = 0; i < 4; i += 1){
            vc[i] += khela[right][i] - (left?khela[left - 1][i]: 0);
        }
    };

    if(X == x && Y == y){
        cout << 0 << '\n';
        return;
    }
    int ans = - 1;
    for(int i = 0; i < n; i += 1){
        cout << "index " << i << ": ";
        int left = i, right = n - 1;
        while(left <= right){
            int mid = (left + right) >> 1; cout << " MID : " << mid << ": \n";
            vector<int>ini(4, 0); calc(ini, 0, i - 1);
            calc(ini, mid + 1, n - 1);
            vector<int>seg(4); seg = vct;
            for(int k: ini) cout << k << " ";
            cout << endl;
            seg[0] += (seg[0]?ini[1] - ini[0]: 0); seg[1] += (seg[1]?ini[0] - ini[1]: 0);
            seg[2] += (seg[2]?ini[3] - ini[2]: 0); seg[3] += (seg[3]?ini[2] - ini[3]: 0);
            for(int K: seg) cout << K << " ";
            cout << endl << endl;
            int cnt = 0, m = mid - i + 1; 
            for(int k = 0; k < 4; k += 1) cnt += seg[k];

            if((cnt < m && (!(((m - cnt) & 1))) || cnt == m)) ans = (mid - i + 1), right = mid - 1;
            else left = mid + 1;
        }
        cout << endl;
    }
    cout << ans << '\n';
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