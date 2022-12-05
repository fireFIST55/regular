#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;
int n;
double y[N];
 
inline bool check (double k, int p) {
	bool chk = false;
	int q = -1;
	for (int i = 1; i <= n; i ++) {
		if ((y[i] - y[p]) == (i - p) * k) continue ;
		chk = 1;
		if (q == -1) q = i;
		if ((y[i] - y[q]) != (i - q) * k) {
			chk = 0; break ;
		}
	}
	if (chk == 0) return 0;
	return 1;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    cin >> n;
	for (int i = 1; i <= n; i ++) cin >> y[i];
	for (int i = 1; i <= 3; i ++)
	 	for (int j = i + 1; j <= 3; j ++)
	 	 	if (check(double(y[j] - y[i]) / double(j - i), i)) {
	 	 		cout << "Yes"; return 0;
			}
	cout << "No";

    
    return 0;
}