#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool g = 1;
    int n, k;
    cin >> n >> k;
    vector<int>a(n/2), b(n/2);

    if(!k){
        for(int i = 0; i < n/2; i += 1) a[i] = i, b[i] = i^(n - 1);
    }
    else if(n - 1 == k){
        if(n == 4){
            cout << - 1 << '\n';
            return;
        }

        a[0] = n - 1;
        b[0] = n - 2;
        
        a[1] = n - 3;
        b[1] = 1;

        a[2] = 0;
        b[2] = 2;

        for(int i = 3; i < n/2; i += 1) a[i] = i, b[i] = i^(n - 1);
    }
    else{
        a[0] = k, b[0] = n - 1;
        for(int i = n - 2, l = 1; l < n/2; l += 1, i -= 1){
            if(i == k)  a[l] = k^(n - 1), b[l] = 0;
            else if((i^(n - 1)) == k)   a[l] = i, b[l] = 0;
            else    a[l] = i, b[l] = i^(n - 1);
        }
    }

    for(int i = 0; i < n/2; i += 1) cout << a[i] << " " << b[i] << "\n";
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