#include <bits/stdc++.h>
using namespace std;
using LL = long long;
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	int n;
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i ++ ){
		cin >> x[i];
	}
	sort(x.begin(), x.end());
	
	vector<int> a(n + 2);
	for (int i = 0; i < n; i ++ ){
		bool ok = false;
		for (int j = -1; j <= 1; j ++ ){
			if (a[x[i] + j] == 1){
				ok = true;
				break;
			}
		}
		if (!ok){
			a[x[i] + 1] = 1;
		}
	}
	cout << accumulate(a.begin(), a.end(), 0) << " ";
	
	vector<int> b(n + 2);
	for (int i = 0; i < n; i ++ ){
		for (int j = -1; j <= 1; j ++ ){
			if (b[x[i] + j] == 0){
				b[x[i] + j] = 1;
				break;
			}
		}
	}
	cout << accumulate(b.begin(), b.end(), 0) << "\n";
	return 0;
}
