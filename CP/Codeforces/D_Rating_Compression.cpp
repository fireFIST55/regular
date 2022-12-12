#include <bits/stdc++.h>
using namespace std;

const int mxN = 300001;
int arr[mxN]; 
int cnt[mxN];
bool ans[mxN];
int n;

void solve() {
    cin>>n;
    for(int i = 0; i <= n; ++i) {
        cnt[i] = 0;
        ans[i] = 0;
    }
    for(int i = 0; i < n; ++i) {
        cin>>arr[i];
        arr[i]--; 
        cnt[arr[i]]++;
    }
    int tp = -1;
    while(cnt[tp+1]==1) {
        tp++;
    }
    ans[0] = tp==n-1;
    int l = 0; int r = n-1;
    
    ans[n-1] = cnt[0] > 0;
    
    for(int i = n-1; i > 0; --i) {
        if(!ans[n-1]) break;
        ans[i] = true;
        int nxt = n-i-1;
        if(--cnt[nxt] == 0 && (arr[l]==nxt || arr[r]==nxt) && cnt[nxt+1]) {
            if(arr[l]==nxt)l++;
            if(arr[r]==nxt)r--;
            continue;
        }
        break;
    }
    
    for(int i = 0; i < n; ++i) {
        cout<<ans[i];
    }
    cout<<"\n";
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin>>T;
    while(T--) {
        solve();
    }
    return 0;
}