#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>p(n);
    for(int i = 0; i < n; i += 1){
        cout << 1 << endl;
        int res; cin >> res;
        if(!res){
            cout << 1 << endl;
            return;
        }
        p[i] = (res > 0);
    }
    int left = 1, right = m, index = 0;
    while(left <= right){
        int mid = (left + right) >> 1;
        cout << mid << endl;
        int res; cin >> res;
        if(!p[index++]) res *= (- 1);
        if(!res){
            cout << mid << endl;
            return;
        }
        else if(res > 0) left = mid + 1;
        else right = mid - 1;
    }
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