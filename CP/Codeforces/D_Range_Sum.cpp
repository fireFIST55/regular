#include<bits/stdc++.h>
using namespace std;
using LL = long long;
int T, n;
void solve(){
    vector<int> a(n);
    if(n&1){
        int id = 0;
        for(int i = n/2; i < n; ++i, ++id){
            a[i] = n+id+2;
            a[n-i-1] = n-id+2;
        }
        a[0]-=1;
        a[n-1]+=1;
        a[n-2]+=1;
    }else{
        int id = 1;
        for(int i = n/2; i < n; ++i, ++id){
            a[i] = n+id;
            a[n-i-1] = n-id;
        }
    }
    for(int i = 0; i < n; ++i) cout << a[i] << " \n"[i == n-1];
}
int main()
{
    cout.tie(0);
    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        solve();
    }
    return 0;
}