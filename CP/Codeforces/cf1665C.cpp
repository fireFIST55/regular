#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin >> n;
        vector <int> a(n+2);
        for(int i=1; i<n; i++){
            cin >> x;
			a[x]++;
        }
        a.push_back(1);
		sort(a.rbegin(), a.rend());
		while(a.back() == 0)
            a.pop_back();
		int k = a.size();
		priority_queue <int> q;
		for(int i=0; i<k; i++)
			q.push(a[i]+i);
		while(q.top() > k) {
			k++;
			q.push(q.top()-1);
			q.pop();
		}
		cout << k << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}