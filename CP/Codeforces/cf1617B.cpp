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
        isPrime.resize(n + 1, true);

        for(int i = 2; i <= n; i += 2){
            if(isPrime[i]){
                for(int j = i*i; j<=n; j+=i)    isPrime[j] = false;
            }

            if(i == 2) i -= 1;
        }
    }
};

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    sieve sv(35000);

    int t = 1;
    cin>> t;

    while(t--){
        int n, a, b, c = 1;
        cin>> n;
        if(n&1){
            n -= 1;
            for(int i = 2; i <= n; i += 1){
                if((i&1 || i == 2) && sv.isPrime[i] && __gcd(i, n - i) == 1){
                    a = i, b = n - i;
                    break;
                }
            }
        }
        else a = n/2, b = a - 1;
        cout<< a<<" " <<b <<" " << c<<endl;
    }
    
    return 0;
}