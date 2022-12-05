#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int zero = 0, cost = INT_MAX;
    string s; cin >> s;
    int n = s.length();
    deque<int>zeros;

    for(int i = 0; s[i]; i += 1){
        if(s[i] == '0'){
            zero += 1; zeros.push_back(i);
        }
    }

    int curr = zero;
    do{
        
    }while(curr);
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