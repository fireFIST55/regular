#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 1; cin >> n;
    vector<int>vc(n);
    int x = n, y = 0;

    for(int &i: vc) cin >> i;

    int l, r;
    for(int i = 0; i < n; i += 1){
        while(i < n && !vc[i]) i += 1;
        int curr = 1; l = i;
        while(i < n && vc[i] > 0) curr *= vc[i++];

        if(i == n || !vc[i]){
            if(ans < curr){
                x = l; y = (n - i - 1); ans = curr;
            }
        }
        int first = - 1, firstm = 1, f = 1, last = - 1, lastm = 1, x = 1, cnt = 0;
        while(i < n && vc[i]){
            f *= vc[i];
            if(vc[i] < 0){
                cnt += 1;
                if(first == - 1){
                    first = i; firstm = f;
                }
                last = i; lastm = 1;
            }

            x *= vc[i]; lastm *= vc[i++];
        }

        if(cnt&1){
            if(cnt == 1){
                if(curr > ans){
                    ans = curr; y ;
                }
            }
            else if(curr*(x/lastm) >= (x/firstm)){
                ans = curr*(x/lastm); y = last - 1;
            }
            else{
                ans = (x/firstm); x = first + 1; y = last;
            }
        }
        else{
            if(curr > ans){
                ans = curr; last = i;
            }
        }
    }

    cout << x << " " << y << '\n';
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