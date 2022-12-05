#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 10e3 + 1;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    vector<int>operation(M, M);
    operation[1] = 0;
    for(int i = 1; i < M; i += 1){
        for(int j = 1; j <= i; j += 1){
            int k = i + i / j;
            if(k < M) operation[k] = min(operation[k], operation[i] + 1);
        }
    }

    int t = 1;
    cin >> t;

    while(t--){
        int a, n, budget, sum = 0;
        cin >> n >> budget;
        vector<int>need(n), coins(n);

        for(int i = 0; i < n; i += 1){
            cin >> a;
            need[i] = operation[a];
            sum += need[i];
        }
        
        int ans = 0;
        budget = min(budget, sum);
        vector<int>dp(budget + 1);

        for(int &i: coins)  cin >> i;
        for(int i = 0; i < n; i += 1){
            for(int k = need[i]; k <= budget; k += 1){
                dp[k] = max(dp[k], dp[k - need[i]] + coins[i]);
            }
        }

        cout << *max_element(dp.begin(), dp.end()) << '\n';
    }
    
    return 0;
}