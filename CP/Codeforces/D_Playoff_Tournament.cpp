#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int k; cin >> k; 
    string s; cin >> s;
    int n = 1 << k;
    vector<int>cnt(2 * n + 5, 1);
    auto khela = [&](int index){
        return cnt[index] = s[index] == '?'?cnt[2*index + 1] + cnt[2 * index + 2]: s[index] =='1'?cnt[2 * index + 1]: cnt[2 * index + 2];
    };

    reverse(s.begin(), s.end());
    for(int i = n - 2; i >= 0; i -= 1)  khela(i);
    int q; cin >> q;
    for(int i = 0; i < q; i += 1){
        int index; char ch; cin >> index >> ch;
        index = n - index - 1; s[index] = ch;
        while(index){
            khela(index);
            index = (index - 1) / 2;
        }
        cout << khela(index) << '\n';
    }
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