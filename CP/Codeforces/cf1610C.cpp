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
    int a, b;
};

void solve(){
    int n, a, b;
    cin>> n;
    struct st info[n];

    for(int i = 0; i < n; i += 1)
        cin>> info[i].a>> info[i].b;
    
    int left = 1, right = n, mid, cnt;
    while(right > left){
        mid = (left + right + 1)>>1;

        cnt = 0;
        for(int i = 0; i < n && cnt < mid; i += 1){
            if(info[i].a >= mid - cnt - 1&& info[i].b >= cnt)  cnt += 1;
        }

        if(cnt >= mid) left = mid;
        else right = mid - 1;
    }
    cout<<left<<endl;
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