#include <bits/stdc++.h>
using namespace std;
int x, y;

int main() {
	cin >> x >> y;
	for (int i = 1; i <= (x+1)/2; i++){
		if (i == x-i+1){
			for (int j = 1; j <= (y+1)/2; j++){
				cout << i << ' ' << j << '\n';
				if (j != y-j+1){
					cout << i << ' ' << y-j+1 << '\n';
				}
			} 
		}
		else{
			for (int j = 1; j <= y; j++){
			    cout << i << ' ' << j << '\n';
			    cout << x-i+1 << ' ' << y-j+1 << '\n';
			}
		}
    }
}