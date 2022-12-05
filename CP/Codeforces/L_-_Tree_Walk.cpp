#include<bits/stdc++.h>
#define ll long long
using namespace std;

pair<int, int>khela[30];

void pre(int u){
    cout << ' ' << u;
    if(khela[u].first != - 1) pre(khela[u].first);
    if(khela[u].second != - 1) pre(khela[u].second);
}

void in(int u){
    if(khela[u].first != - 1) in(khela[u].first);
    cout << ' ' << u;
    if(khela[u].second != - 1) in(khela[u].second);
}

void post(int u){
    if(khela[u].first != - 1) post(khela[u].first);
    if(khela[u].second != - 1) post(khela[u].second);
    cout << ' ' << u;
}

void solve(){
    int n; cin >> n;
    vector<int>parent(n + 5);
    for(int i = 0; i < n; i += 1){
        int id, l, r; cin >> id >> l >> r;
        if(l != - 1) parent[l] = 1;
        if(r != - 1) parent[r] = 1;
        pair<int, int>pi = {l, r}; khela[id] = pi;
    }

    int root = 0;
    for(int i = 0; i < n; i += 1){
        if(!parent[i]){
            root = i;
        }
    }

    cout << "Preorder\n";
    pre(root); cout << '\n';
    cout << "Inorder\n";
    in(root); cout << '\n';
    cout << "Postorder\n";
    post(root); cout << '\n';
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