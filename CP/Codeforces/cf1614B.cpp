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
    int pos, times;
};

bool compare(struct st a, struct st b){
    if(a.times > b.times)   return 1;
    else if(a.times < b.times) return 0;
    else{
        if(a.pos > b.pos)   return 0;
        else return 1;
    }
}

void solve(){
    int n;
    ull cost = 0;
    cin>> n;
    struct st info[n];
    vector<int>ans(n + 2);
    for(int i = 0; i < n; i += 1){
        cin>> info[i].times;
        info[i].pos = i + 1;
    }

    sort(info, info + n, compare);
    ans[1] = n/2 + 1;
    for(int i = 0, l = n/2, r = n/2 + 2; i < n;){
        if(l > 0)   ans[info[i++].pos + 1] = l--, cost += (ull)2*abs(l - n/2)*info[i - 1].times;
        if(r <= n + 1)  ans[info[i++].pos + 1] = r++, cost += (ull)2*abs(r - 2 - n/2)*info[i - 1].times;
    }

    cout<<cost <<endl;
    for(int i = 1; i <= n + 1; i += 1)  cout<<ans[i] <<" ";
    cout<<endl;  
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