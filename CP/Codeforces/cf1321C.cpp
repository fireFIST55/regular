#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    deque<int>baki[26];
    int n, cnt = 0; cin >> n >> s;

    for(int i = 0; i < n; i += 1){
        baki[(s[i] - 97)].push_back(i);
    }

    for(int i = 25; i >= 0; i -= 1){
        while(!baki[i].empty()){
            int k = baki[i].front();

            k -= 1;
            while(k >= 0 && (s[k] == '-' || (s[k] - 97 == i))) k -= 1;

            if(k >= 0 && (i - s[k] + 97 == 1)){
                s[baki[i].front()] = '-'; cnt += 1;
            }
            else{
                k = baki[i].front() + 1;
                while(k < n && (s[k] == '-' || ((s[k] - 97) == i))) k += 1;

                if(k < n && (i - s[k] + 97 == 1)){
                    cnt += 1; s[baki[i].front()] = '-';
                }
            }

            baki[i].pop_front();
        }
    }

    cout << cnt << '\n';
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