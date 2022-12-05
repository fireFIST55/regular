#include<bits/stdc++.h>
#define ll long long
using namespace std;

class node{
public:
    node* next[2];
    node(){
        for(int i = 0; i < 2; i += 1) next[i] = NULL;
    }
};
node* root;

void Insert(int n){
    node* curr = root;
    for(int i = 31; i >= 0; i -= 1){
        int id = (n & (1 << i))?1: 0;
        if(curr -> next[id] == NULL) curr -> next[id] = new node();
            
        curr = curr -> next[id];
    }
}

int SearchMX(int n){
    int ans = 0;
    node* curr = root;
    for(int i = 31; i >= 0; i -= 1){
        int id = (n & (1 << i))?0: 1;
        if(!(curr -> next[id]))
            id = id?0: 1;
        if(id) ans |= (1 << i);

        curr = curr -> next[id];
    }

    return (ans ^ n);
}

int SearchMN(int n){
    int ans = 0;
    node* curr = root;
    for(int i = 31; i >= 0; i -= 1){
        int id = (n & (1 << i))?1: 0;
        if(!(curr -> next[id])) id = id?0: 1;
        if(id) ans |= (1 << i);

        curr = curr -> next[id];
    }

    return (ans ^ n);
}

void del(node* curr){
    for(int i = 0; i < 2; i += 1){
        if(curr -> next[i]) del(curr -> next[i]);
    }

    delete(curr);
}

void solve(){
    root = new node();
    int n, mx = 0, mn = INT_MAX; cin >> n;

    int curr;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        curr = i?curr ^ a: a;
        if(i){
            mx = max(mx, max(curr, SearchMX(curr))); mn = min(mn, min(curr, SearchMN(curr)));
        }
        else mx = mn = curr;
        Insert(curr);
    }

    del(root);
    cout << mx << " " << mn;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i += 1){
        cout << "Case " << i << ": ";
        solve();
        if(i != t) cout << '\n';
        else cout << '\n';
    }
    
    return 0;
}