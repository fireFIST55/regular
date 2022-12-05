#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int age; 
    string s, hudai; cin >> age >> s;
    getchar();
    getline(cin, hudai);
    if(s == "G") cout << "OK";
    else if(s == "PG"){
        if(age >= 13) cout << "OK";
        else cout << "OK IF ACCOMPANIED";
    }
    else if(s == "R-13"){
        if(age < 13) cout << "ACCESS DENIED";
        else cout << "OK";
    }
    else if(s == "R-16"){
        if(age < 16) cout << "ACCESS DENIED";
        else cout << "OK";
    }
    else if(s == "R-18"){
        if(age < 18) cout << "ACCESS DENIED";
        else cout << "OK";
    }
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