#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll a, ll b, ll c){
    ll clc = (a - b) * (a - b) + (a - c) * (a - c) + (b - c) * (b - c);
    return clc;
}

void solve(){
    int nr, ng, nb; cin >> nr >> ng >> nb;
    vector<int>red(nr), green(ng), blue(nb);
    for(int &i: red) cin >> i;
    for(int &i: green) cin >> i;
    for(int &i: blue) cin >> i;
    sort(red.begin(), red.end());
    sort(green.begin(), green.end());
    sort(blue.begin(), blue.end());

    ll ans = - 1;
    function<void(vector<int>a, vector<int>b, vector<int>c)>khela = [&](vector<int>a, vector<int>b, vector<int>c){
        for(int i: b){
            int index1 = lower_bound(a.begin(), a.end(), i) - a.begin();
            int index2 = upper_bound(c.begin(), c.end(), i) - c.begin();
            if(index2 == c.size() || index1 == a.size()) continue;
            if(index2) index2 -= 1;
            ans = (ans == - 1)?calc(a[index1], i, c[index2]): min(ans, calc(a[index1], i, c[index2])); 
        }
    };

    khela(red, green, blue); khela(red, blue, green);
    khela(green, red, blue); khela(green, blue, red);
    khela(blue, red, green); khela(blue, green, red);
    cout << ans << '\n';
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