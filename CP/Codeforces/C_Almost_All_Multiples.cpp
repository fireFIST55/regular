#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    if((n % x) && n > 2){
        cout << - 1 << '\n';
        return;
    }
    vector<int>ans(n);
    ans[0] = x; ans[n - 1] = 1;
    for(int i = 1; i < n - 1; i += 1) ans[i] = i + 1;
    if(x == n){
        for(int i: ans) cout << i << ' ';
        cout << '\n';
        return;
    }

    vector<int>div;
    for(int i = 2; i * i <= n; i += 1){
        if(!(n % i)){
            div.emplace_back(i);
            if((n / i) != i) div.emplace_back(n / i);
        }
    }
    sort(div.begin(), div.end());
    deque<int>cycle; cycle.push_back(x);
    for(int i: div){
        if(!(i % cycle.back()) && (i != x)) cycle.push_back(i);
    }
    int last = n;
    while(!cycle.empty()){
        ans[cycle.back() - 1] = last; last = cycle.back(); cycle.pop_back();
    }
    for(int i: ans) cout << i << " ";
    cout << '\n';
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