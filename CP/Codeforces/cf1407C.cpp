#include<bits/stdc++.h>
#define ll long long
using namespace std;

int ask(int x, int y){
    int a;
    cout << "? " << x + 1 << " " << y + 1 << endl;  cin >> a;
    return a;
}

void solve(){
    int a, b, n, curr = 0;
    cin >> n;
    vector<int>ans(n);

    for(int i = 1; i < n; i += 1){
        int a = ask(curr, i), b = ask(i, curr);
        if(a > b){
            ans[curr] = a;
            curr = i;
        }
        else{
            ans[i] = b;
        }
    }
    ans[curr] = n;

    cout << "! ";
    for(int i: ans) cout << i << " ";
    cout << endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}