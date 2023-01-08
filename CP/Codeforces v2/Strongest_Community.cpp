#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;
vector<int>vc(N);
struct Node{
    pair<int, int>lmx, rmx, mx;
};
struct ST{
    #define left (node << 1)
    #define right ((node << 1) + 1)
    Node tree[4 * N];
    void push(int node, int )

    void build(int node, int b, int e){
        if(b == e){
            tree[node].mx = {1, vc[b]};
            tree[node].lmx = {1, vc[b]};
            return;
        }
        int mid = (b + e) >> 1;
        build(left, b, mid); build(right, mid + 1, e);
    }
};
void solve(){
    
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}