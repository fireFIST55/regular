#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        if (n % 2 == 1) {
            cout << "Mike\n";
            return;
        }

        int smallest = 0;
        for (int i = 0; i < n; ++i)
            if (a[i] < a[smallest])
                smallest = i;

        if (smallest % 2 == 0) cout << "Joe\n";
        else cout << "Mike\n";
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