#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, t1 = "RGB", t2 = "GBR", t3 = "BRG"; 
    int k, n; cin >> n >> k >> s;
    vector<int>khela1(n), khela2(n), khela3(n);

    for(int i = 0, k = 0; s[i]; i += 1, k += 1){
        khela1[i] += (s[i] != t1[k%3]) + (i?khela1[i - 1]: 0);
        khela2[i] += (s[i] != t2[k%3]) + (i?khela2[i - 1]: 0);
        khela3[i] += (s[i] != t3[k%3]) + (i?khela3[i - 1]: 0);
    }

    int ans = k;
    for(int i = 0; i + k - 1 < n; i += 1){
        if(i) ans = min(ans, min(khela1[i + k - 1] - khela1[i - 1], min(khela2[i + k - 1] - khela2[i - 1], khela3[i + k - 1] - khela3[i - 1])));
        else ans = min(ans, min(khela1[i + k - 1], min(khela2[i + k - 1], khela3[i + k - 1])));
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}