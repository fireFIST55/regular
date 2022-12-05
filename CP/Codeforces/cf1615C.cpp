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
    bool on = 0, no = 0, sealed = 0, onn = 0;
    int n, milse = 0, ans = INT_MAX;
    cin>> n;
    string a, b;
    cin>> a>> b;
    for(int i = 0; a[i]; i += 1){
        milse += (a[i] == b[i]);
        if(a[i] == '1') on = 1;

        if(a[i] == b[i] && a[i] == '1') onn = 1;
    }

    if(milse == n){
        cout<< 0<< endl;
        return;
    }
    if(!on){
        cout<< - 1<< endl;
        return;
    }

    string c = a;
    for(int i = 0; a[i]; i += 1){
        if(!sealed && a[i] == b[i] && a[i] == '1'){
            c[i] = a[i];
            sealed = 1;
            continue;
        }

        if(!onn){
            if(a[i] == '1'){
                c[i] = a[i];
                onn = 1;
                continue;
            }
        }
        c[i] = ((a[i] == '1')?'0': '1');
    }

    milse = 0;
    int one1 = 0, one2 = 0;
    for(int i = 0; c[i]; i += 1){
        milse += (c[i] ==  b[i]);
        one1 += (c[i] == '1');
        one2 += (b[i] == '1');
    }

    if(one1 != one2) no = 1;
    else ans = (n - milse) + 1;

    milse = one1 = 0;
    for(int i = 0; a[i]; i += 1){
        milse += (a[i] == b[i]);
        one1 += (a[i] == '1');
    }

    if(one1 != one2 && no){
        cout<< - 1<< endl;
        return;
    }

    ans = min(ans, n - milse);
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