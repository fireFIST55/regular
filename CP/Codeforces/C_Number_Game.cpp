#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    int left = 0, right = n - 1, ans = 0;
    while(left <= right){
        bool yes = 1;
        int mid = (left + right) >> 1, k = - 1, cnt = 0;
        multiset<int>st;
        while(k + 1 < n && vc[k + 1] <= mid + 1){
            st.insert(vc[++k]);
        }
        if(k < mid) yes = 0;
        while(!st.empty() && yes){
            while(!st.empty()){
                auto it = st.end(); it--;
                if(*it > mid + 1 - cnt) st.erase(it);
                else{
                    st.erase(it); cnt += 1;
                    break;
                }
            }
            if(st.empty()) break;
            int lft = *st.begin();
            auto rght = st.end(); rght--;
            if(lft + mid + 1 - cnt > mid - cnt) st.erase(st.begin());
            else if(*rght + mid + 1 - cnt > mid - cnt) st.erase(rght);
            else{
                st.erase(st.begin()); 
                if(lft + mid + 1 - cnt < mid - cnt) st.insert(lft + mid + 1 - cnt);
            }
        }
        if(cnt == mid + 1) ans = mid + 1, left = mid + 1;
        else right = mid - 1;
    }
    cout << ans << '\n';
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