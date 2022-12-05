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

struct info{
    int defence, gold;
};

bool compare(struct info a, struct info b){
    if(a.defence < b.defence)   return 1;
    else if(a.defence > b.defence)  return 0;
    else{
        if(a.gold > b.gold) return 1;
        else return 0;
    }
}

void solve(){
    int s, base;
    cin>> s>> base;
    vector<int>att(s);
    vector<int>totgl(base + 1);
    struct info en[base];

    for(int &X: att)    cin>> X;

    for(int i = 0; i < base; i += 1)
        cin>> en[i].defence>> en[i].gold;
    sort(en, en + base, compare);

    for(int i = 1; i <= base; i += 1)   totgl[i] = totgl[i - 1] + en[i - 1].gold;

    for(int i = 0; i < s; i += 1){
        int left = 0, right = s - 1, mid, ans = 0;

        while(left <= right){
            mid = (left + right)>>1;
            if(en[mid].defence <= att[i])   left = mid + 1, ans = totgl[mid + 1];
            else right = mid - 1;
        }

        cout<<ans <<" ";
    }
    cout<<endl;
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