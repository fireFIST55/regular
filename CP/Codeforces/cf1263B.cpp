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

struct st{
    string s;
    int index;
};

bool compare1(st a, st b){
    if(!(a.s).compare((b.s))){
        if(a.index < b.index)   return 1;
        else return 0;
    }
    else if((a.s).compare((b.s)) < 0)   return 1;
    else return 0;
}

bool compare2(st a, st b){
    if(a.index < b.index)   return 1;
    else return 0;
}

void solve(){
    int a, n, ans = 0;
    cin>> n;
    struct st ar[n];
    string ab = "0123456789";
    vector<vector<int>>fr(4, vector<int>(12, 0));

    for(int i = 0; i < n; i += 1){
        string s;
        cin>> s;
        ar[i].s = s;
        ar[i].index = i;
        for(int k = 0; k < 4; k += 1){
            a = s[k] - 48;
            fr[k][a] += 1;
        }
    }
    sort(ar, ar + n, compare1);
    
    for(int i = 1; i < n; i += 1){
        string &s1 = ar[i].s, &s2 = ar[i - 1].s;

        if(!s1.compare(s2)){

            for(int k = 0; k < 4; k += 1){
                if(s1[k] == s2[k]){
                    int x;

                    for(int l = 0; l <= 9; l += 1){
                        if(!fr[k][l]){
                            x = l;
                            break;
                        }
                    }
                    s2[k] = ab[x];
                    ans += 1;
                    fr[k][x] += 1;
                    fr[k][(s1[k] - 48)] -= 1;
                    break;
                }
            }
        }
    }

    sort(ar, ar + n, compare2);
    cout<<ans<<endl;
    for(int i = 0; i < n; i += 1)   cout<<ar[i].s<<endl;
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