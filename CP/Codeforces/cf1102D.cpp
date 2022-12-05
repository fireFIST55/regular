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
    int n, one = 0, two = 0, zero = 0;
    string s;
    cin>> n>> s;
    for(int i = 0; i < n; i += 1)
        s[i] == '0'?zero += 1: s[i] == '1'? one += 1: two += 1;

    if(zero < n/3){
        for(int i = 0; i < n && zero < n/3; i += 1){
            if(s[i] == '1' && one > n/3){
                s[i] = '0';
                one -= 1;
                zero += 1;
            }
            else if(s[i] == '2' && two > n/3){
                s[i] = '0';
                two -= 1;
                zero += 1;
            }
        }
    }

    if(two < n/3){
        for(int i = n - 1; i >= 0 && two < n/3; i -= 1){
            if(s[i] == '0' && zero > n/3){
                s[i] = '2';
                zero -= 1;
                two += 1;
            }
            else if(s[i] == '1' && one > n/3){
                s[i] = '2';
                one -= 1;
                two += 1;
            }
        }
    }
    
    if(one < n/3){
        if(zero > n/3){
            for(int i = n - 1; i >= 0 && one < n/3 && zero > n/3; i -= 1){
                if(s[i] == '0'){
                    s[i] = '1';
                    one += 1;
                    zero -= 1;
                }
            }
        }

        if(two > n/3){
            for(int i = 0; i < n && two > n/3 && one < n/3; i += 1){
                if(s[i] == '2'){
                    s[i] = '1';
                    two -= 1;
                    one += 1;
                }
            }
        }
    }

    cout<< s<< endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while(t--)
        solve();
    
    return 0;
}