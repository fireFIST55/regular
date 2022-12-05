#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, n, k;
    cin >> n >> k;
    map<int, int >freq;
    deque<int>screen;
    for(int i = 0; i < n; i += 1){
        cin >> a;
        if(!freq[a]){
            freq[a] = 1;
            screen.push_front(a);
            if(screen.size() > k){
                a = screen.back();
                screen.pop_back();
                freq[a] = 0;
            }
        }
    }

    cout << screen.size() << '\n';
    while(!screen.empty()){
        cout << screen.front() << ' ';
        screen.pop_front();
    }
    cout << '\n';
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