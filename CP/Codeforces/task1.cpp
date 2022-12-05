#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector<ll>fib(105);
void func(int index){
    if(index == n + 1) return;
    fib[index] = fib[index - 1] + fib[index - 2];
    func(index + 1);
}

void solve(){
    cin >> n;
    fib[0] = 0; fib[1] = 1;
    func(2);
    cout << fib[n] << '\n';
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