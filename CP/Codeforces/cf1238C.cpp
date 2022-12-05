#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int H, N;
        cin >> H >> N;
        vector<int> P(N);
        for (int i = 0; i < N; i++)
            cin >> P[i];
        int ans = 0;
        P.push_back(0);
        for (int i = 1; i < N;)
        {
            if (P[i + 1] == P[i] - 1)
            {
                i+=2;
            }
            else
            {
                i++;
                ans++;
            }
        }
        cout << ans << '\n';
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