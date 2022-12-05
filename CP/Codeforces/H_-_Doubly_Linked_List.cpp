#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    list<int> x;
    cin >> n;
	for(int i = 0; i < n; i += 1){
		string a;
		cin >> a;
		if(a == "deleteFirst"){
			x.pop_front();
		}
		else if(a == "deleteLast"){
			x.pop_back();
		}
		else{
			int b;
			cin >> b;
			if(a == "insert"){
				x.push_front(b);
			}
			else{
				list<int>::iterator it = find(x.begin(), x.end(), b);
				if(it != x.end()){
					x.erase(it);
				}
			}
		}
	}
	for(list<int>::iterator it = x.begin(); it != x.end(); ++it){
		if(it != x.begin()){
			cout << ' ';
		}
		cout << *it;
	}
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