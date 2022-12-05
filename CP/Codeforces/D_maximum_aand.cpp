#include<bits/stdc++.h>
#define ll long long
using namespace std;

class node{
public:
    node *next[2];
    int freq[2] = {0};

    node(){
        for(int i = 0; i < 2; i += 1) next[i] = NULL;
    }
};
node *root;

void Insert(int n){
    node *curr = root;
    for(int i = 30; i >= 0; i -= 1){
        int x = (n & (1 << i))?1: 0; curr -> freq[x] += 1;
        if(!curr -> next[x]) curr -> next[x] = new node();
        curr = curr -> next[x];
    }
}

int Search(int n){
    int ans = 0;
    node *curr = root;
    for(int i = 30; i >= 0; i -= 1){
        int x = (n & (1 << i))?0: 1;
        if(curr -> freq[x]){
            if(x) ans |= (1 << i);
            curr -> freq[x] -= 1; curr = curr -> next[x];
        }
        else{
            x = !x;
            if(x) ans |= (1 << i);
            curr -> freq[x] -= 1; curr = curr -> next[x];
        }
    }
    return ans;
}

void del(node* curr){
    for(int i = 0; i < 26; i += 1){
        if(curr -> next[i]) del(curr -> next[i]);
    }

    delete(curr);
}

void solve(){
    root = new node();
    int n; cin >> n;
    vector<int>a(n), b(n);
    for(int &i: a) cin >> i;
    for(int &i: b){
        cin >> i; Insert(i);
    }
    sort(a.rbegin(), a.rend());

    int ans;
    for(int i = 0; i < n; i += 1){
        int c = Search(a[i]); //cout << a[i] << ": " << c << endl;
        c = a[i] ^ c;
        ans = i?ans & c: c; cout << ans << endl;
    }
    cout << ans << '\n';

    del(root);
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