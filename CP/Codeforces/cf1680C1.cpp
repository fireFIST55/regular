#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;cin>>s;
        int zeros = count(s.begin(), s.end(), '0');
        int ones = count(s.begin(), s.end(), '1');
 
        int count = 0;
        vector<int> prefix_zeros, suffix_zeros;
        for (int i = 0; i<s.size(); i++) {
            if(s[i] == '0') {
                count++;
            } else {
                prefix_zeros.push_back(count);
            }
        }
        prefix_zeros.push_back(count);
 
        count = 0;
        for (int i = s.size()-1; i>=0; i--) {
            if(s[i] == '0') {
                count++;
            } else {
                suffix_zeros.push_back(count);
            }
        }
        suffix_zeros.push_back(count);
        
 
        int l = 0, r = ones;
        
        int ans = 0;
        while(l<=r) {
            int mid = (l+r)/2;
            bool works = false;
            for (int i = 0; i <= mid; i++) {
                int z = zeros - prefix_zeros[i] - suffix_zeros[mid-i];
                if (z <= mid) {
                    works = true;
                    break;
                }
            }
            if (works) {
                r = mid-1;
                ans = mid;
            } else {
                l = mid+1;
            }
        }
        cout << ans << "\n";
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