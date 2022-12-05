#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e6 + 3;

class sieve{
public:
    vector<int>prime;
    sieve(int n){
        prime.resize(n, 1);

        prime[0] = 0;
    
        for(ll i = 2; i*i < n; i += 1){
            if(prime[i] == 1){
                for(ll j = i*i; j < n; j += i) prime[j] = 0;
            }
        }

        for(int i = 1; i < M; i += 1) prime[i] += prime[i - 1];
    }
};

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    sieve sv(M);

    int t = 1;
    cin >> t;

    while(t--){
        int n, ans = 0, x;
        cin >> n;
        x = (sqrt(n) + .00001);
        ans = sv.prime[n] - sv.prime[x] + 1;
        cout << ans <<  '\n';
    }
    
    return 0;
}