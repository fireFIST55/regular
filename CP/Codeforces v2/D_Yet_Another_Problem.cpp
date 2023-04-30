#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, Q;
    cin >> n >> Q;
    map<int, int> odd, even;
    vector<int> last_nz(n + 1, 0), last(n + 1, -1), pxor(n + 1, 0);
    vector<int> a(n + 1);
    even[0] = 0;
    int cur = 0;
    for(int i=1;i<=n;++i) {
    	cin >> a[i];
    	cur ^= a[i];
    	pxor[i] = cur;
    	if(a[i] == 0) {
    		last_nz[i] = last_nz[i - 1];
    	}
    	else {
    		last_nz[i] = i;
    	}
    	if(i & 1) {
    		if(even.count(cur)) {
    			last[i] = even[cur];
    		}
    		odd[cur] = i;
    	}
    	else {
    		if(odd.count(cur)) {
    			last[i] = odd[cur];
    		}
    		even[cur] = i;
    	}
    }
    while(Q--) {
    	int l, r;
    	cin >> l >> r;
    	if(pxor[l - 1] != pxor[r]) {
    		cout << "-1\n";
    	}
    	else if(last_nz[r] < l) {
    		cout << "0\n";
    	}
    	else if(r % 2 == l % 2) {
    		cout << "1\n";
    	}
    	else if(a[l] == 0 or a[r] == 0) {
    		cout << "1\n";
    	}
    	else if(last[r] >= l) {
    		cout << "2\n";
    	}
    	else {
    		cout << "-1\n";
    	}
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}