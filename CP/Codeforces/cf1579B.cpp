#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

struct st{
    int l, r, d;
};

void solve(){
    int n, ans = 0;
    cin>> n;
    vector<int>a(n), b(n);
    struct st nm[n];

    for(int i = 0; i<n; i += 1){
        cin>> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    for(int i = 0; i<n; i += 1){
        if(a[i] != b[i]){
            int k = 0;

            for(int j = i + 1; j <n; j += 1){
                k += 1;

                if(b[i] == a[j]){
                    nm[ans].l = i + 1;
                    nm[ans].r = j + 1;
                    nm[ans].d = k;
                    ans += 1;

                    for(int l = j; l>i; l -= 1)
                        a[l] = a[l - 1];
                    a[i] = b[i];
                }
            }
        }
    }

    cout<<ans<<endl;
    for(int i = 0; i<ans; i += 1)   cout<<nm[i].l<<' '<<nm[i].r<<' '<<nm[i].d<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}