#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    string s, t, ab = "abc";
    cin>> s>> t;
    sort(s.begin(), s.end());
    if(t == ab){
        bool a = 0, b = 0, c = 0;
        map<char, int>freq;

        for(int i = 0; s[i]; i += 1){
            freq[s[i]] += 1;
            if(s[i] == 'a') a = 1;
            else if(s[i] == 'b') b = 1;
            else if(s[i] == 'c') c = 1;
        }

        if(a && b && c){
            int left = 0, right = 0;
            for(int i = 0; s[i]; i += 1){
                if(!left  && s[i] == 'b') left = i;
                if(s[i] == 'c') right = i + 1;
            }

            sort(s.begin() + left, s.begin() + right, greater<char>());
        }
    }

    cout<< s<< endl;
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