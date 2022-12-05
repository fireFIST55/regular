#include<bits/stdc++.h>
#define ll long long
using namespace std;

char hobe(bool rev, char ch){
    char ch1 = rev?ch == '1'?'0': '1': ch; 
    return ch1;
}

void solve(){
    int n; cin >> n;
    string a, b; cin >> a >> b;
    deque<char>khela;
    for(char ch: a)  khela.push_back(ch);

    vector<int>ans;
    bool back = 0, rev = 0;
    for(int i = n - 1; i >= 0; i -= 1){
        if(!back){
            char ch = khela.back(); ch = hobe(rev, ch);
            if(ch != b[i]){
                char rep = khela.front(); rep = hobe(rev, rep); khela.pop_front();
                rev = !rev; back = !back;
                if(rep != b[i])
                    ans.emplace_back(i + 1);
                else{
                    ans.emplace_back(1); 
                    if(i) ans.emplace_back(i + 1);
                }
            }
            else khela.pop_back();
        }
        else{
            char ch = khela.front(); ch = hobe(rev, ch);
            if(ch != b[i]){
                char rep = khela.back(); rep = hobe(rep, rep); khela.pop_back();
                rev = !rev; back = !back;
                if(rep != b[i]) ans.emplace_back(i + 1);
                else{
                    ans.emplace_back(1); 
                    if(i) ans.emplace_back(i + 1);
                }
            }
            else khela.pop_front();
        }
    }
    cout << ans.size() << ' ';
    for(int i: ans) cout << i << ' ';
    cout << '\n';
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