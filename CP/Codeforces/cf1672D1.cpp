#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>a(n), b(n), khela(n + 1);

    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;

    for(int i = n - 1, j = n - 1; i >= 0 || j >= 0; ){
        while(j - 1 >= 0 && b[j] == b[j - 1]) khela[b[j--]] += 1;

        if(i >= 0 && j >= 0 && a[i] == b[j]) i -= 1, j -= 1;
        else if(khela[a[i]]) khela[a[i--]] -= 1;
        else{
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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