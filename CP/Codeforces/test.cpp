#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    set<int>st;
    for(int i = 1; i <= 5; i += 1) st.insert(i);
    auto it = st.end(); it--;
    cout << *it << endl;
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