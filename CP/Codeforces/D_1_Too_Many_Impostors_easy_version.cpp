#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, index = 0, index2 = 0; cin >> n;
    vector<int>vc, ans, sign(n + 5, - 1), vis(n + 5);
    function<int(int x)>calc = [&](int x){
        int a = (x > n)?x - n: x;
        return a;
    };
    for(int i = 1; i <= n; i += 1){
        cout << "? " << calc(i) << " " << calc(i + 1) << " " << calc(i + 2) << endl;
        int a; cin >> a;
        if(vc.empty()) vc.emplace_back(a);
        else if(vc.back() != a){
            if(vc.back()) sign[i] = 1, sign[calc(i + 1)] = 0;
            else sign[i] = 0, sign[calc(i + 1)] = 1;
            index = i;
            vc.emplace_back(a); break;
        }
        else vc.emplace_back(a);
    }
    for(int i = 0; i < 3; i += 1){
        if(sign[calc(i + index)] == - 1) sign[calc(i + index)] = vc.back();
    }
    for(int i = index + 1, k = 0; k < n; k += 1, i += 1){
        if(sign[calc(i)] != - 1 && sign[calc(i + 1)] != - 1 && sign[calc(i + 2)] != - 1) break;
        cout << "? " << calc(i) << " " << calc(i + 1) << " " << calc(i + 2) << endl;
        int a; cin >> a;
        for(int j = 0; j < 3; j += 1){
            if(sign[calc(i + j)] == - 1) sign[calc(i + j)] = a;
        }
    }
    for(int i = 1; i <= n; i += 1){
        if(!sign[i]) ans.emplace_back(i);
    }
    cout << "! "; cout << ans.size();
    for(int i: ans) cout << " " << i;
    cout << endl;
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