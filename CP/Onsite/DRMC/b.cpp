#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mn(ll n){
    return n * (ll)60;
}

ll hr(ll n){
    return n * (ll)60 * (ll)60;
}

void print(ll second){
    ll day = second / (60 * 60 * 24), x = (second % (ll)(60 * 60 * 24));
    ll hour = (x / 3600); x = x % 3600;
    ll minn = x / 60; x = x % 60; 
    ll sec = x;
    cout << day << " day(s)\n" << hour << " hour(s)\n" << minn << " minute(s)\n" << sec << " second(s)\n";
}

void solve(){
    ll second = 0;
    string s[4];
    for(int i = 0; i < 4; i += 1){
        getline(cin, s[i]);
    }
    int m = s[0].length();
    int day1 = stoi(s[0].substr(4, m - 4)); 
    m = s[2].length();
    int day2 = stoi(s[2].substr(4, m - 4)); 
    int a1 = stoi(s[1].substr(0, 2)), a2 = stoi(s[1].substr(5, 2)), a3 = stoi(s[1].substr(10, 2));
    int b1 = stoi(s[3].substr(0, 2)), b2 = stoi(s[3].substr(5, 2)), b3 = stoi(s[3].substr(10, 2));
    if(day1 == day2){
        second = hr(a1) + mn(a2) + a3 - (hr(b1) + mn(b2) + b3);
    }
    else{
        second = hr(b1) + mn(b2) + b3 + (60 - a3) + mn(60 - (a2 + 1)) + hr(24 - (a1 + 1));
        second += (day2 - day1 - 1) * (ll)(24 * 60 * 60);
    }

    print(second);
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