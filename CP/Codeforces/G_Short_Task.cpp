#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e7 + 5;
vector<ll>sum(N);
vector<int>sdiv(N, - 1), ans(N, - 1);
void seive(){
    sdiv[1] = 1;
    for(int i = 2; i * i < N; i += 1){
        if(sdiv[i] == - 1){
            sdiv[i] = i;
            for(int j = i * i; j <= N; j += i){
                if(sdiv[j] == - 1) sdiv[j] = i;
            }
        }
    }

    sum[1] = 1;
    for(int i = 2; i < N; i += 1){
        if(sdiv[i] == - 1){
            sdiv[i] = i;
            sum[i] = sdiv[i] + 1;
        }
        else{
            int k = i; sum[i] = 1;
            while(!(k % sdiv[i])){
                k /= sdiv[i];
                sum[i] = sum[i] * sdiv[i] + 1;
            }

            sum[i] *= sum[k];
        }
    }

    ans[1] = 1;
    for(int i = N - 1; i > 0; i -= 1){
        if(sum[i] < N) ans[sum[i]] = i;
    }
}

void solve(){
    int n; cin >> n; cout << ans[n] << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    seive();

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}