#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, n, x, cnt = 0;
    cin >> n >> x;
    vector< int > prob(n);
    bool jhamela = 0;
    for(int i = 0; i < n; i += 1){
        cin >> prob[i];
        if(i){
            if(prob[i] < prob[i - 1]) jhamela = 1;
        }
    }

    if(!jhamela){
        cout << 0 << '\n';
        return;
    }
    for(int i = 0; i < n; i += 1){
        if(x < prob[i]){
            swap(prob[i], x);
            cnt += 1;
        }
        if(i - 1 >= 0){
            if(prob[i - 1] > prob[i]){
                cout << - 1 << '\n';
                return;
            }
        }

        jhamela = 0;
        for(int j = i + 1; j < n; j += 1){
            if(prob[j] < prob[j - 1]){
                jhamela = 1;
                break;
            }
        }

        if(!jhamela) break;
    }

    cout << cnt << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}