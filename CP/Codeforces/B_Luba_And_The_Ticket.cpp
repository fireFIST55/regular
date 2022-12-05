#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    vector<int>vc;
    for(char ch: s) vc.emplace_back(ch - 48);
    int first = 0, last = 0, moves = 0;
    for(int i = 0; i < 3; i += 1){
        first += vc[i]; last += vc[5 - i];
    }

    if(first == last){
        cout << 0 << '\n';
        return;
    }
    else if(first > last){
        swap(first, last);
        for(int i = 0; i < 3; i += 1) swap(vc[i], vc[5 - i]);
    }

    sort(vc.begin(), vc.begin() + 3);
    sort(vc.begin() + 3, vc.end());
    int l = 0, r = 5, dif = last - first, move = 0;
    for(int i = 0; i < 3 && dif; i += 1){
        if(last - (first - vc[l] + 9) <= last - vc[r] - first){
            first = first - vc[l] + 9;
            dif = max(0, (last - first)); l += 1; move += 1;
        }
        else{
            last = last - vc[r];
            dif = max(0, last - first); r -= 1; move += 1;
        }

    }
    cout << move << '\n';
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