#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s;
int n;
void perm(int curr, int r, string str){
    if(curr == n){
        cout << str << '\n';
        return;
    }
    for(int i = r; i < n; i += 1){
        perm(curr + 1, i + 1,(str + s[i]));
    }
}

void solve(){
    cin >> s; n = s.length();
    perm(0, 0, "");
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