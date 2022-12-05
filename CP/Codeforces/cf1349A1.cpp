#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 2e5 + 5;
vector<int>divI[M], check(M);

void solve(){
    int n;
    ll ans = 1;  cin >> n;
    deque<int>div;

    for(int i = 0; i < n; i += 1){
        int a; cin >> a;

        for(int i = 2; i*i <= a; i += 2){
            if(!(a%i)){
                int cnt = 0;
                while(!(a%i)){
                    a /= i; cnt += 1;
                }

                divI[i].push_back(cnt);
                if(!check[i]) div.push_back(i);
                check[i] = 1;
            }

            if(i == 2) i = 1;
        }

        if(a > 1){
            divI[a].push_back(1);
            if(!check[a]) div.push_back(a); check[a] = 1;
        }
    }

    while(!div.empty()){
        int x = div.front(); div.pop_front();
        sort(divI[x].begin(), divI[x].end());

        int cnt = (divI[x].size() > n - 2)?(divI[x].size() == n)?divI[x][1]:divI[x][0]: 0;
        // cout << x << " " << cnt << endl;

        while(cnt--){
            ans = ans*(ll)x;
        }
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}