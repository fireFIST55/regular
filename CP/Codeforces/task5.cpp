#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>fact(1005);

void func(int i, int n){
    if(i > n) return;
    fact[i] = fact[i - 1] + i;
    func(i + 1, n);
}

void solve(){
    int n; cin >> n;
    func(1, n); cout << fact[n] << '\n';
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