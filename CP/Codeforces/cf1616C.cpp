#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 70;
    cin>> n;
    vector<double>a(n);
    for(double &X: a)  cin >> X;
    if(n == 1){
        cout << 0 << '\n';
        return;
    }

    for(int i = 0; i < n; i += 1){
        for(int j = i + 1; j < n; j += 1){
            int cost = 0;
            double x, d = (a[j] - a[i])/((j - i)/1.0);
            x = a[i] - i*d;
            // cout << d << endl;

            for(int k = 0; k < n; k += 1){
                if(x + k*d != a[k]) cost += 1;
            }
            ans = min(ans, cost);
        }
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}