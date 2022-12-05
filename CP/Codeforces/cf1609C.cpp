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

class sieve{
public:
    vector<bool>isPrime;
    sieve(int n){
        isPrime.resize(n + 5, true);
        isPrime[0] = isPrime[1] = false;

        for(int i = 2; i * i <= n; i += 1){
            if(isPrime[i]){
                for(int j = i * i; j <= n; j += i)    isPrime[j] = false;
            }
        }
    }
};

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    sieve sv(1000000);

    int t = 1;
    cin>>t;

    for(int i = 0; i < t; i += 1){
        int n, e;
        ll ans = 0;
        cin>> n>> e;
        vector<ll>vc(n), left(n + e + 1), right(n + e + 1);
        
        for(int i = 1; i <= n; i += 1){
            cin>> vc[i - 1];
            if(vc[i - 1] == 1)  left[i] += ((i - e) >= 1?left[i - e]: 0) + (ll)1;
            else left[i] = 0;
        }

        for(int i = n ; i > 0; i -= 1){
            if(vc[i - 1] == 1)  right[i] += right[i + e] + (ll)1;
            else right[i] = 0;
        }

        for(int i = 1; i <= n; i += 1){
            if(sv.isPrime[vc[i - 1]])   ans += (right[i + e] + ((i - e>=1?left[i - e]: 0))*(right[i + e] + 1));
        }

        cout<<ans <<endl;
    }
    return 0;
}