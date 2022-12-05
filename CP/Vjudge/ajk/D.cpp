#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int a, int b, int c){
    if(a + b >= c && b + c >= a && c + a >= b) return 1;
    return 0;
}

void solve(){
    int ans = 0;
    int n; cin >> n;
    for(int i = 1; i <= n; i += 1){
        int rest = (n - i), take = 0;
        int left = 1, right = rest / 2;
        while(left <= right){
            int mid = (left + right) >> 1;
            if(check(i, mid, rest - mid)){
                right = mid - 1; take = mid;
            }
            else left = mid + 1;
        }

        ans += (rest/2 - take);
    }
    cout << ans << '\n';
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