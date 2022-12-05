#include<bits/stdc++.h>
#define ll long long
using namespace std;

string mn(string s1, string s2){
    if(s1.compare(s2)){
        if(s1.compare(s2) > 0) return s2;
        else return s1;
    }
    else return s1;
}

void solve(){
    int n;
    char ch;
    string s, ans;
    cin >> n >> s;

    if(n == 1){
        cout <<  s << s << '\n';
        return;
    }

    ans += s[0];
    for(int i = 1; i < n; i += 1){
        if(i == 1 && s[i] < s[i - 1]) ans += s[i];
        else if(i != 1 && s[i] <= s[i - 1]) ans += s[i];
        else break;
        if(i == n || s[i] > s[i - 1]){
            string r = s.substr(0, i), sb = r;
            reverse(r.begin(), r.end());
            sb += r;

            cout << sb << endl;
            break;
        }
    }

    string temp = ans;
    reverse(temp.begin(), temp.end());
    ans += temp;
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}