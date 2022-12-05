#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, cnt = 0; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        int mini = i;
        for(int j = i + 1; j < n; j += 1){
            if(vc[mini] > vc[j]) mini = j;
        }
        if(mini != i){
            cnt += 1; swap(vc[i], vc[mini]);
        } 
    }
    cout << vc[0];
    for(int i = 1; i < n; i += 1) cout << ' ' << vc[i];
    cout << '\n' << cnt << '\n';
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