#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.length(), op = n / 2, cl = n / 2;
    vector<int>ques;
    for(int i = 0; i < n; i += 1){
        if(s[i] == '(') op -= 1;
        else if(s[i] == ')') cl -= 1;
        else ques.emplace_back(i);
    }

    function<bool(string t)> khela = [&](string t){
        int bal = 0;
        bool ok = 1;
        for(char a: t){
            if(a == '(') bal += 1;
            else bal -= 1;

            if(bal < 0){
                ok = 0; break;
            }
        }

        ok &= (bal == 1);
        return ok; 
    };

    bool yes = 1;
    if(op && cl){
        for(int i = 0; i < ques.size(); i += 1){
            if(i < op) s[ques[i]] = '(';
            else s[ques[i]] = ')';
        }

        swap(s[ques[op - 1]], s[ques[op]]);
        if(khela(s)) yes = 0;
    }
    yes?cout << "YES\n": cout << "NO\n";
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