#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<pair<int, int> > arr;
    arr = { { 1, 3 }, { 1, 7 }, { 2, 4 },
            { 2, 6 }, {3, 4}, { 3, 8 }, { 8, 6 } };
 
    // Given pair {2, 5}
    pair<int, int> p = { 2, 5 };
    int khela = lower_bound(arr.begin(), arr.end(), p) - arr.begin();
    cout << khela << endl;
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