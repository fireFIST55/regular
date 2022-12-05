#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int a, int b, int c){
    if(a + b >= c && b + c >= a && c + a >= b) return 1;
    return 0;
}

int frq[50][50][50] = {0};
void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n / 2; j += 1){
            if(check(i, j, (n - i - j))){
                cout << i << " " << j << " " << n - i - j << endl;
                vector<int>vc{i, j, n - i - j}; sort(vc.begin(), vc.end());
                if(frq[vc[0]][vc[1]][vc[2]]) cout << "REPEAT" << endl;
                frq[vc[0]][vc[1]][vc[2]] = 1;
            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}