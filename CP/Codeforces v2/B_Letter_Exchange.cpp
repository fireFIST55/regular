#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct cell{
    int index1, index2; char ch1, ch2;
};

void solve(){
    int n; cin >> n;
    string str = "win";
    vector<cell>ans;
    deque<int>sur, def;
    vector<int>freq(26);
    vector<int>sd[26][26];

    for(int i = 0; i < n; i += 1){
        string s; cin >> s;
        for(int k = 0; k < 3; k += 1) freq[s[k] - 'a'] += 1;
        for(char ch: str){
            if(freq[ch - 'a'] > 1) sur.push_back(ch - 'a');
            else if(!freq[ch - 'a']) def.push_back(ch - 'a');
        }
        while(!sur.empty()){
            sd[sur.back()][def.back()].emplace_back(i); sur.pop_back(), def.pop_back();
        }
    }

    for(int i = 0; i < 3; i += 1){
        for(int j = i + 1; j < 3; j += 1){
            int in1 = str[i] - 'a', in2 = str[j] - 'a';
            while(!sd[in1][in2].empty() && !sd[in2][in1].empty()){
                int index1 = sd[in1][in2].back(), index2 = sd[in2][in1].back(); sd[in1][in2].pop_back(), sd[in2][in1].pop_back();
                cell node; node.ch1 = str[i], node.ch2 = str[j], node.index1 = index1, node.index2 = index2;
                ans.emplace_back(node);
            }
        }
    }

    
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}