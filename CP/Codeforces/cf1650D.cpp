#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>a(n), b(n), ans(n);
    for(int i = 0; i < n; i += 1){
        cin >> a[i]; b[i] = a[i];
    }

    for(int i = n; i > 0; i -= 1){
        int index = 0;
        for(int j = 0; j < n; j += 1){
            if(a[j] == i){
                index = j; break;
            }
        }

        for(int j = 0; j < i;  j += 1){
            b[(j + (i - 1 - index))%i] = a[j];
        }

        a = b;
        ans[i - 1] = (i == 1)?0: (index + 1)%i;
    }

    for(int i: ans) cout << i << ' ';
    cout << '\n';
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