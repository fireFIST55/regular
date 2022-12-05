#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, start; cin >> n;
    vector<int>dummy1(n, 1), dummy2(n, 2), smlr(n), ans(n);
    for(int i = 0; i < n; i += 1){
        dummy1[i] += 1;
        cout << "?";
        for(int k: dummy1) cout << " " << k;
        cout << endl; dummy1[i] -= 1;
        int index1; cin >> index1;

        dummy2[i] -= 1;
        cout << "?";
        for(int k: dummy2) cout << " " << k;
        cout << endl; dummy2[i] += 1;
        int index2; cin >> index2;

        if(!index1)  ans[i] = n, start = i;
        else{
            if(index1 == i + 1) smlr[i] = index2 - 1;
            else smlr[index1 - 1] = i;
        }
    }

    int curr = n - 1;
    while(curr > 0){
        start = smlr[start]; ans[start] = curr--;
    }
    cout << "!";
    for(int i: ans) cout << " " << i;
    cout << endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}