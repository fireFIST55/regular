#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int q, x; cin >> q >> x;
	vector<int>mod(x);

	set<pair<int, int>>ase;
	for(int i = 0; i < x; i += 1)
		ase.insert({0, i});
	
	for(int i = 0; i < q; i += 1){
		int k; cin >> k;
		k %= x;
		ase.erase({mod[k]++, k});
		ase.insert({mod[k], k});
		
		cout << ase.begin()->first*x + ase.begin()->second << '\n';
	}
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