#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, cnt1 = 0, cnt2 = 0; cin >> n;
    vector<int>vc(n);
    vector<pair<int, int>>ans;
    for(int &i: vc){
        cin >> i; cnt1 += (i == 1), cnt2 += (i == -1);
    }
    int l = 0, r = 0;
    for(int i = 1; i < n; i += 1){
        if(!(i & 1) || (vc[i] == - 1 && cnt2 > cnt1) || (vc[i] == 1 && cnt1 > cnt2)){
            r += 1; continue;
        }
        ans.emplace_back(l, r);
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}