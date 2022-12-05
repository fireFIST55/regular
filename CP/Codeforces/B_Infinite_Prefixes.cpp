#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x; 
    string s; cin >> n >> x >> s;
    int ans = 0;
	bool infAns = false;
	
	int cntZeros = (int)count(s.begin(), s.end(), '0');
	int total = cntZeros - (n - cntZeros);
	
	int bal = 0;
	for(int i = 0; i < n; i++) {
		if(total == 0) {
			if(bal == x)
				infAns = true;
		}
		else if(abs(x - bal) % abs(total) == 0) {
			if((x - bal) / total >= 0)
				ans++;
		}
		
		if(s[i] == '0')
			bal++;
		else
			bal--;
	}
	
	if(infAns) ans = -1;
	cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}