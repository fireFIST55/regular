#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    if(a[n - 1] != b[m - 1]){
        int index = - 1; bool ac = 0, bc = 0;
        for(int i = n - 1; i > 0; i -= 1){
            if(a[i] == a[i - 1]){
                ac = 1;
                index = i; break;
            }
        }
        for(int i = m - 1; i > 0 && index == - 1; i -= 1){
            if(b[i] == b[i - 1]){
                bc = 1;
                index = i; break;
            }
        }
        string str;
        if(ac || bc) str = (ac?a.substr(index, (n - 1 - index + 1)): b.substr(index, (m - 1- index + 1)));
        reverse(str.begin(), str.end());
        if(ac) b += str, a = a.substr(0, index);
        else if(bc) a += str, b = b.substr(0, index);
    }
    //cout << a << " " << b << endl;
    bool no = 0;
    for(int i = 0; i + 1 < a.length(); i += 1){
        if(a[i] == a[i + 1]) no = 1;
    }
    for(int i = 0; i + 1 < b.length(); i += 1){
        if(b[i] == b[i + 1]) no = 1;
    }
    cout << (no?"NO\n": "YES\n");
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