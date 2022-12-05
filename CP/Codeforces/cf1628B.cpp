#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool palindrome(string s){
    int n = s.length();
    for(int i = 0, j = n - 1; i < j; i += 1, j -= 1){
        if(s[i] != s[j]) return 0;
    }

    return 1;
}

void solve(){
    bool yes = 0;
    int n; cin >> n;
    vector<string>vs(n);
    for(string &i: vs){
        cin >> i;
        if(i.length() == 1 || palindrome(i)) yes = 1;
    }

    if(yes){
        cout << "YES\n";
        return;
    }

    map<string, bool>ase2, ase3;
    for(int i = 0; i < n && !yes; i += 1){
        string s, rv; rv = s = vs[i];
        reverse(rv.begin(), rv.end());
        int x = s.length();

        if(x == 2){
            if(ase2[rv] || ase3[rv]) yes = 1;
            ase2[s] = 1;
        }
        else{
            string rv1, s1;
            s1 = s[0]; s1 += s[1];
            rv1 += s[2]; rv1 += s[1];

            if(ase3[rv] || ase2[rv1]) yes = 1;
            ase3[s] = 1; ase3[s1] = 1;
        }
    }

    yes?cout << "YES\n": cout << "NO\n";
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