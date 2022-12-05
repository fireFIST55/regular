#include<bits/stdc++.h>
#define ll long long
using namespace std;

int ask(vector<int>&a){
    cout << "? " << a[0] << " " << a[2] << endl;
    int k; cin >> k;
    if(k == 1){
        cout << "? " << a[0] << " " << a[3] << endl;
        cin >> k; k = (k == 1?a[0]: a[3]);
    }
    else if(k == 2){
        cout << "? " << a[1] << " " <<  a[2] << endl;
        cin >> k; k = (k == 1?a[1]: a[2]);
    }
    else{
        cout << "? " << a[1] << " " << a[3] << endl;
        cin >> k; k = (k == 1?a[1]: a[3]);
    }

    return k;
}

void solve(){
    int n; cin >> n;
    vector<int>khela;
    for(int i = (1 << n); i >= 0; i -= 1){
        khela.emplace_back(i);
    }

    while(khela.size() > 2){
        vector<int>tmp(4);
        tmp[0] = khela.back(); khela.pop_back();
        tmp[1] = khela.back(); khela.pop_back();
        tmp[2] = khela.back(); khela.pop_back();
        tmp[3] = khela.back(); khela.pop_back();
        int w = ask(tmp); khela.push_back(w);
    }

    if(khela.size() == 2){
        cout << "? " << khela[0] << " " << khela[1] << endl;
        int k; cin >> k; k = (k == 1?khela[0]: khela[1]); khela.pop_back(); khela.pop_back();
        khela.push_back(k);
    }
    cout << "! " << khela[0] << endl;
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