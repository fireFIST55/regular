#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int zeroT = 0, oneT = 0, one = 0;
    string s, t; cin >> s >> t;
    bool sealed = 0;
    for(int i = 0, j = t.length() - 1; i < t.length(); i += 1, j -= 1){
        if(!sealed && t[i] == t[j]){
            if(t[i] == '1') oneT += 1;
            else zeroT += 1;
        }
        else if(!sealed) sealed = 1;

        one += (t[i] == '1'); 
    }

    int oneS = 0;
    for(int i = 0; i < s.length(); i += 1){
        oneS += (s[i] == '1');
    }

    if(oneS <= one || s.length() - oneS <= (t.length() - one)){
        cout << s << '\n';
        return;
    }

    int zero = t.length() - one, zeroS = (s.length() - oneS) - zero;
    oneS -= one;
    // cout << endl;
    // cout << zero << " " << one << " " << zeroS << " " << oneS << endl;

    cout << t;
    while(1){
        if(zero - zeroT <= zeroS && one - oneT <= oneS){
            for(int i = oneT + zeroT; i < t.length(); i += 1) cout << t[i];
            zeroS -= (zero - zeroT); oneS -= (one - oneT);
        }
        else{
            for(int i = 0; i < oneS; i += 1) cout << '1';
            for(int i = 0; i < zeroS; i += 1) cout << '0';
            break;
        }
    }

    cout << '\n';
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