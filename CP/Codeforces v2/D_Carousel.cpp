#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, anscolor = 1; cin >> n;
    vector<int>vc(n), paint(n), color(4);
    for(int &i: vc) cin >> i;
    int i = 0, j = n - 2;
    if(vc[0] == vc[n - 1]) paint[0] = 1, color[1] = 1;
    else if(n > 1) paint[0] = 1, paint[n - 1] = 2, anscolor += 1, color[1] = color[2] = 1;
    else paint[0] = 1;

    while(j >= 1 && vc[0] != vc[n - 1]){
        if(vc[j] == vc[j + 1]) break;

        int x = paint[j + 1] == 1?2: 1;
        if(paint[j - 1]){
            if(vc[j] != vc[j - 1] && paint[j - 1] == x) paint[j] = 3;
            else paint[j] = x;
        }
        else paint[j] = x;
        if(!color[paint[j]]) color[paint[j]] = 1, anscolor += 1; 
        j -= 1;
    }
    for(int i = 1; i < n && !paint[i]; i += 1){
        int x = paint[i - 1] == 1?2: 1;
        if(vc[i] == vc[i - 1]) paint[i] = paint[i - 1];
        else paint[i] = x;
        if(!color[paint[i]]) anscolor += 1, color[paint[i]] = 1;
    }
    cout << anscolor << '\n';
    for(int i: paint) cout << i << ' ';
    cout << '\n';
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