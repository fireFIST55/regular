#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(int op, int cl, int ques){
    int r = 0;
    if((op == cl) && !(ques % 2)) r = 1;
    else if((op != cl)){
        if((ques >= abs(op - cl) && !(abs(ques - abs(op - cl)) % 2))) r = 1;
    }
    return r;
}

void solve(){
    ll ans = 0;
    string s; cin >> s;
    int n = s.length();
    for(int i = 0; i < n; i += 1){
        int op = 0, cl = 0, ques = 0;
        deque<char>dq;
        for(int j = i; j < n; j += 1){
            char ch = s[j];
            if(ch == ')'){
                if(dq.empty() && !ques) break;
                else dq.pop_front();
            }
            else if(ch == '(') dq.push_back(ch);
            op += (ch == '('), cl += (ch == ')'), ques += (ch == '?');
            if(ques) ans += calc(op, cl, ques);
        }
        //cout << ans << endl;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();
    return 0;
}