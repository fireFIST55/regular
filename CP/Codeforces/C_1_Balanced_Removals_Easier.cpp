#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node{
    int x, y, z;
};

void solve(){
    int n; cin >> n; node khela[n];
    for(int i = 0; i < n; i += 1){
        cin >> khela[i].x >> khela[i].y >> khela[i].z;
    }

    function<bool(int i, int j, int k)>check = [&](int i, int j, int k){
        bool yes = 0;
        if(min(khela[i].x, khela[j].x) <= khela[k].x && max(khela[i].x, khela[j].x) >= khela[k].x && min(khela[i].y, khela[j].y) <= khela[k].y && khela[k].y <= max(khela[i].y, khela[j].y) && min(khela[i].z, khela[j].z) <= khela[k].z && max(khela[i].z, khela[j].z) >= khela[k].z){
            yes = 1;
        }

        return yes;
    };  

    vector<int>taken(n);
    for(int i = 0, cnt = 0; cnt < n / 2; i += 1){
        if(taken[i]) continue;
        cnt += 1; int j = n - 1;
        while(j > i && taken[j]) j -= 1;
        int curr = j; taken[curr] = 1; j -= 1;
        for(; j > i; j -= 1){
            if(taken[j] || !check(i, curr, j)) continue;
            taken[curr] = 0; curr = j; taken[j] = 1;
        }
        cout << i + 1 << " " << j + 1 << '\n';
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