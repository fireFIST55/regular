#include<bits/stdc++.h>
#define ll long long
using namespace std;

#define M 10e7 + 1
vector<ll>sm(M);
vector<int>mnDiv(M, - 1);
void solve(){
    
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    mnDiv[1] = 1;
    for(int i = 2; i*i < M; i += 1){
        if(mnDiv[i] == - 1){
            for(int j = i*i; j < M; j += i){
                if(mnDiv[j] == - 1) mnDiv[j] = i;
            }
        }
    }

    sm[1] = 1;
    for(int i = 2; i < M; i += 1){
        if(mnDiv[i] == - 1){
            mnDiv[i] = i; sm[i] = i + 1;
        }
        else{
            int j = i; sm[i] = 1;
            while(!(j%mnDiv[j])){
                j /= mnDiv[j]; s[i] = (s[i])
            }
        }
    }
    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}