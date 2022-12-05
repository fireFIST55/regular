#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll hc, ac, hm, am, coins, wa, aa, killM, killC;
    cin >> hc >> ac >> hm >> am >> coins >> wa >> aa;
    killM = hm%ac?(hm/ac + 1): hm/ac;
    killC = hc%am?(hc/am + 1): hc/am;

    if(killM <= killC) cout << "YES\n";
    else{
        for(int i = 0; i <= coins; i += 1){
            killC = (hc + i*aa)%am?(hc + i*aa)/am + 1: (hc + i*aa)/am;
            killM = hm%(ac + (coins - i)*wa)?hm/(ac + (coins - i)*wa) + 1: hm/(ac + (coins - i)*wa);

            if(killC >= killM){
                cout << "YES\n";
                return;
            }
        }

        cout << "NO\n";
    }
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