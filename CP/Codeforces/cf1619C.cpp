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
    string a, s;
    cin>> a>> s;

    ull temp = 1, ans = 0;
    int k = s.length() - 1;
    for(int i = a.length() - 1; i >= 0; i -= 1){
        ull x = (a[i] - 48), y;
        if(k >= 0) y = s[k] - 48, k -= 1;
        else{
            cout<< - 1<<endl;
            return;
        }

        if(x > y){
            if(k >= 0) y = (s[k] - 48)*10 + y, k -= 1;
            else{
                cout<< - 1<<endl;
                return;
            }

            if(y - x <= 9) ans = (y - x)*temp + ans;
            else{
                cout<< - 1<<endl;
                return;
            }
        }
        else ans = (y - x)*temp + ans;

        temp = temp*(ull)10;
    }

    if(k >= 0){
        for(; k>= 0; k -= 1){
            ull x = s[k] - 48;
            ans = ans + x*temp;
            temp= temp*(ull)10;
        }
    }

    cout<< ans<< endl;
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