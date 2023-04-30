#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool samen = 0, dif = 0;
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    int sum = 0;
    sum += vc[0];
    for(int i = 1; i < n; i += 1){
        sum += vc[i];
        if(vc[i] == vc[i - 1] && vc[i] == - 1) samen = 1;
        else if(vc[i] != vc[i - 1]) dif = 1;
    }
    sum += (samen?4: dif?0: -4);
    cout << sum << '\n';
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