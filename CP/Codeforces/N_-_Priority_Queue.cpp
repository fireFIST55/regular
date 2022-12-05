#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    priority_queue<int>pq;
    while(1){
        string s; cin >> s;
        if(s == "insert"){
            int n; cin >> n;
            pq.push(n);
        }
        else if(s == "extract"){
            cout << pq.top() << '\n'; pq.pop();
        }
        else break;
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}