#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
vector<int>vc(N);

void ask(int n){
    cout << "? " << n << endl;
    int a; cin >> a; vc[n] = a;
}

void solve(){
    int n; cin >> n;
    vc[0] = vc[n + 1] = 1e5 + 5;

    int left = 1, right = n;
    while(left < right){
        int mid = (left + right) >> 1;
        ask(mid); 
        if(mid + 1 < n + 1) ask(mid + 1);
        if(vc[mid] < vc[mid + 1]) right = mid;
        else left = mid + 1;
    }
    cout << "! " << left << endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}