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
    int a, b, c, week, ans;
    cin>> a>> b>> c;
    week = min(a/3, min(b/2, c/2));
    a -= week*3;
    b -= week*2;
    c -= week*2;
    ans = week*7;

    vector<int>routine{1, 2, 3, 1, 3, 2, 1};
    for(int i = 0; i < 7; i += 1){
        int curr = 0, x = a, y = b, z = c;
        bool no = 0;

        for(int j = 0, k = i; j < 7; j += 1, k += 1){
            routine[k%7] == 1?x? x-= 1, curr += 1: no = 1: routine[k%7] == 2? y? y -= 1, curr += 1: no = 1: z? z -= 1, curr += 1: no = 1;
            if(no) break; 
        }

        ans = max(ans, week*7 + curr);
    }
    cout<<ans <<endl;
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