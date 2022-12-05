#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, index; cin >> n;
    vector<int>ans(n);
    priority_queue<pair<int, pair<int, int>>>pq;
    pq.push({n, {-1, -n}});

    int x1, y1, x2, y2, curr = 1;
    while(!pq.empty()){
        pair<int, pair<int, int>>pi = pq.top(); pq.pop();
        pi.second.first = -pi.second.first; pi.second.second = -pi.second.second;

        index = pi.first&1?(pi.second.first + pi.second.second)/2: (pi.second.first + pi.second.second - 1)/2;
        ans[index - 1] = curr++;
        // cout << pi.second.first << " " << pi.second.second << " " << index << endl;
        if(pi.first > 1){ 
            x1 = pi.second.first, y1 = index - 1, x2 = index + 1, y2 = pi.second.second;

            if(x1 != index && x1 <= y1) pq.push({y1 - x1 + 1, {-x1, -y1}});
            if(y2 != index && x2 <= y2) pq.push({y2 - x2 + 1, {-x2, -y2}}); 
        }
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