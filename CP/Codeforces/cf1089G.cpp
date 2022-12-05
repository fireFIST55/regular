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
    int a, k, weeks, ans;
    cin>> k;
    vector<int>vc;
    for(int i = 1; i < 8; i += 1){
        cin>> a;
        if(a) vc.push_back(i);
    }

    int n = vc.size();
    weeks = k/n;
    int left = k%n;
    if(!left){
        left = n;
        weeks -= 1;
    }

    int temp, mn = 7;
    for(int i = 0; i <n; i += 1){
        int j = (i + left - 1)%n;
        if(vc[i] <= vc[j]) temp = vc[j] - vc[i] + 1;
        else temp = 8 - vc[i] + vc[j];

        mn = min(mn, temp);
    }

    cout<< weeks*7 + mn<< endl;
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