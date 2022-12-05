#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    deque<int>khela[n + 1];
    vector<int>a(n), b(n), vis(n + 1);
    for(int i = 0; i < n; i += 1){
        cin >> a[i]; khela[a[i]].push_back(i);
    }
    for(int &i: b) cin >> i;

    if(a[n - 1] != b[n - 1]){
        cout << "NO\n";
        return;
    }

    int j = n - 2;
    for(int i = n - 2; i >= 0 && j >= 0; i -= 1){
        while(j >= 0 && vis[j]) j -= 1;
        if(j >= 0){
            if(a[j] != b[i]){
                int k = j + 1;
                while(k < n && vis[k]) k += 1;
                if((k < n && a[k] != b[i]) || khela[b[i]].empty()){
                    cout << "NO\n";
                    return;
                }
                else{
                    vis[khela[b[i]].back()] = 1; khela[b[i]].pop_back();
                }
            }
            else{
                khela[a[j]].pop_back(); j -= 1;
            }
        }
    }

    cout << "YES\n";
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