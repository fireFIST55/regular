#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc;
    for(int i = n; i; i -= 1){
        cout << i << ' '; vc.push_back(i);
    }
    cout << '\n';

    for(int i = 1; i < n; i += 1){
        swap(vc[i], vc[i - 1]);
        for(int i: vc)  cout << i << ' ';
        cout << '\n';

        swap(vc[i], vc[i - 1]);
    }
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