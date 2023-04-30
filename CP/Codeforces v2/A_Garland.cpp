#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    vector<int>vc(n);
    vector<pair<int, int>>vp;
    for(int &i: vc) cin >> i;

    int l = 0, r = n - 1, first = - 1, last = - 1;
    while(l < n && !vc[l]) l += 1;
    while(r >= l && !vc[r]) r -= 1;
    vp.emplace_back(0, l);

    priority_queue<int>odd, even;
    for(int i = l; i <= r; i += 1){
        if(!vc[i]) continue;
        deque<int>khela; int k = i;
        while(k <= r && vc[k]){
            khela.push_back(k++);
        }
        if(vc[khela.back()] % 2 == vc[khela.front()] % 2){
            if(vc[khela.back()] & 1) odd.push(-(khela.back() - khela.front() + 1));
            else even.push(-(khela.back()));
        }
    }
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