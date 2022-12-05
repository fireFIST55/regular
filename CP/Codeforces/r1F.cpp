#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M = 2e5 + 5;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int t = s[0] - 48;

    for(int i = 0; i < t; i += 1){
        int bhul = 0;
        string s1, s2; getline(cin, s1); getline(cin, s2);
        int len1 = s1.length(), len2 = s2.length();
        for(int i = 0; i < max(len1, len2); i += 1){
            if(i < len1 && i < len2){
                if(s1[i] != s2[i]){
                    bhul += 1; //cout << i << endl;
                }
            }
            else{
                // cout << "How about herew\n" << i << endl;
                bhul += 1;
            }
        }

        if(!bhul) cout << "You're logged in!";
        else if(bhul == 1) cout << "You almost got it. You're wrong in just one spot.";
        else if(bhul == 2) cout << "You almost got it, but you're wrong in two spots.";
        else if(bhul == 3) cout << "You're wrong in three spots.";
        else cout << "What you entered is too different from the real password.";
        if(i != t - 1) cout << '\n';
    }
    
    return 0;
}