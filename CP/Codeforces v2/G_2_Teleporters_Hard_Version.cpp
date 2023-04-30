#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, cnt = 0; 
    ll c; cin >> n >> c;
    vector<int>check(n);
    priority_queue<pair<ll, int>>pqf, pql;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        cout << a + i + 1 << " " << a + n - i << endl;
        pqf.push({-(a + i + 1), i}), pql.push({-(a + n - i), i});
    }
    while(!pqf.empty() && !pql.empty()){
        if(cnt){
            if(-pqf.top().first <= -pql.top().first){
                if(c >= -pqf.top().first){
                    c += pqf.top().first, cnt += 1;
                    //cout << pqf.top().second << ' ';
                }
                else break;
                check[pqf.top().second] = 1;
            } 
            else{
                if(c >= -pql.top().first){
                    c += pql.top().first, cnt += 1;
                    //cout << pql.top().second << " ";
                }
                else break;
                check[pql.top().second] = 1;
            }
        }
        else{
            if(c >= -pqf.top().first){
                c += pqf.top().first, cnt += 1; 
                //cout << pqf.top().second <<" ";
            }
            else break;
            check[pqf.top().second] = 1;
        }
        while(!pqf.empty() && check[pqf.top().second]) pqf.pop();
        while(!pql.empty() && check[pql.top().second]) pql.pop();
    }
    cout << endl;
    cout << cnt << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}