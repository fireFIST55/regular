#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct info{
    int x, y, z;
};

const int M = 1e5 + 5;
vector<int>khela[M];

void solve(){
    int n; cin >> n;
    struct info node[n - 2];
    vector<int>freq(n + 1);

    for(int i = 0; i < n - 2; i += 1){
        int x, y, z; cin >> node[i].x >> node[i].y >> node[i].z;
        x = node[i].x; y = node[i].y; node[i].z;
    
        freq[x] += 1; freq[y] += 1; freq[z] += 1;
        khela[x].push_back(i); khela[y].push_back(i); khela[z].push_back(i);
    }

    int root = - 1;
    for(int i = 1; i <= n; i += 1){
        if(freq[i] == 1){
            root = i;
            break;
        }
    }

    vector<int>chain, dummy(2), vis(n + 1);
    chain.push_back(root);
    do{
        int i = 0, x = node[root].x, y = node[root].y, z = node[root].z, mx = 0;
        if(x != root) dummy[i++] = x;
        if(y != root) dummy[i++] = y;
        if(z != root) dummy[i++] = z;

        for(int k: dummy){
            for(int l: khela[k]){
                vis[l] += 1;
            
            }
        }
    }while(1);
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