#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, total = 0, decrease = 0; cin >> n;
    vector<int>vc(n), khela(n);
    for(int &i: vc) cin >> i;
    function<bool(int i)>hill = [&](int i){
        if(i - 1 >= 0 && vc[i] > vc[i - 1] && i + 1 < n && vc[i] > vc[i + 1]) return 1;
        else return 0;
    };
    function<bool(int i)>valley = [&](int i){
        if(i - 1 >= 0 && vc[i] < vc[i - 1] && i + 1 < n && vc[i] < vc[i + 1]) return 1;
        else return 0;
    };
    for(int i = 1; i < n - 1; i += 1){
        if(hill(i) || valley(i)) khela[i] = 1, total += 1;
    }

    for(int i = 1; i < n - 1; i += 1){
        int curr = 0, temp = vc[i];
        if(hill(i) || valley(i)) curr = 1;
        vc[i] = vc[i - 1];
        if(khela[i - 1] && !hill(i - 1) && !valley(i - 1)) curr += 1;
        if(khela[i + 1] && !hill(i + 1) && !valley(i + 1)) curr += 1;
        decrease = max(decrease, curr);

        curr = khela[i];
        vc[i] = vc[i + 1];
        if(khela[i - 1] && !hill(i - 1) && !valley(i - 1)) curr += 1;
        if(khela[i + 1] && !hill(i + 1) && !valley(i + 1)) curr += 1;
        decrease = max(decrease, curr); vc[i] = temp;
    }
    cout << total - decrease << '\n';
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