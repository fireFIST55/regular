#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int>days(n);
    vector<vector<int>>dp1(m + 5, vector<int>(m + 5)), dp2(m + 5, vector<int>(m + 5));
    for(int i = 0; i < n; i += 1){
        string s; cin >> s;
        int day = 0, first = - 1, last = - 1;
        for(int j = 0; j < m; j += 1){
            if(s[j] == '1'){
                day += 1; last = j;
                if(last == - 1) first = j;
                if(day > 1) dp1[i][day] = (last - first + 1);
                else dp1[i][day] = 1; 
            }
        }

        day = 0, first = - 1, last = - 1;
        for(int j = m - 1; j >= 0; j -= 1){
            if(s[j] == '1'){
                day += 1; last = j;
                if(first == - 1) first = j;
                if(day > 1) dp1[i][day] = min(dp1[i][day], (first - last + 1));
                else dp1[i][day] = 1; 
            }
        }
        days[i] = day;
    }
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j <= k; j += 1){
            if(!j) dp2[i][j] = dp1[i][days[i]];
            else if(days[i] > j) dp2[i][j] = dp2[i][j - 1];
        }
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