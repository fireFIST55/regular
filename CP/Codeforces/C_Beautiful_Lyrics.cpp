#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
vector<vector<int>>khela(N, vector<int>(7, 0));

void solve(){
    int n; cin >> n;
    vector<string>vs(n + 1);
    vector<pair<int, int>>a, b;
    vector<char>dsg(26); dsg['a'] = 1, dsg['i'] = 2, dsg['o'] = 3, dsg['i'] = 4, dsg['o'] = 5, dsg['u'] = 6;
    for(int i = 1; i < n + 1; i += 1){
        cin >> vs[i];

        int total = 0;
        char last;
        for(char ch: vs[i]){
            if(dsg[ch]) total += 1, last = ch; 
        }
        if(total){
            if(khela[total][dsg[last]]){
                a.emplace_back(i, khela[total][dsg[last]]); khela[total][dsg[last]] = 0;
            }
            else khela[total][dsg[last]] = i;
        }
    }

    for(int i = 1; i < N; i += 1){
        int last = - 1;
        for(int k = 1; k <= 6; k += 1){
            if(khela[i][k]){
                if(last != - 1) b.emplace_back(khela[i][k], last);
                else last = khela[i][k];
            }
        }
    }
    while(a.size() > b.size()){
        b.push_back(a.back()); a.pop_back();
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}