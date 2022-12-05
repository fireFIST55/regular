#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    deque<int>khela;
    for(int i = 0; i < m; i += 1){
        string s; cin >> s;
        if(s == "pushLeft" || s == "pushRight"){
            int x; cin >> x;
            if(khela.size() == n){
                cout << "The queue is full\n";
                continue;
            }
            if(s == "pushLeft"){
                cout << "Pushed in left: " << x << '\n';
                khela.push_front(x);
            }
            else{
                cout << "Pushed in right: " << x << '\n';
                khela.push_back(x);
            }
        }
        else{
            if(khela.empty()) cout << "The queue is empty\n";
            else{
                if(s == "popLeft"){
                    cout << "Popped from left: " << khela.front() << '\n'; khela.pop_front();
                }
                else{
                    cout << "Popped from right: " << khela.back() << '\n'; khela.pop_back();
                }
            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i += 1){
        cout << "Case " << i << ":\n"; solve();
    }
    
    return 0;
}