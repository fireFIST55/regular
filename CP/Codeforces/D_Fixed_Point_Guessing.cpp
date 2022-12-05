#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool ask(int l, int r){
    int cnt = 0;
    cout << "? " << l << " " << r << endl;
    vector<int>vc(r - l + 1);
    for(int &i: vc){
        cin >> i;
        if(i >= l && i <= r) cnt += 1;
    }
    
    // if(vc[0] < l || vc[0] > r) return 0;

    // int left = 1, right = r - l + 1, cnt = 0;
    // while(left <= right){
    //     int mid = (left + right) >> 1;
    //     if(vc[mid - 1] == vc[0] + mid - 1){
    //         cnt = (mid - left + 1); left = mid + 1;
    //     }
    //     else right = mid - 1;
    // }
    // cout << cnt << endl;

    if(cnt&1) return 1;
    else return 0;
}

void ans(int l){
    cout << "! " << l << endl;
}

void solve(){
    int n; cin >> n;
    int left = 1, right = n;
    while(left <= right){
        int mid = (left + right) >> 1;
        if(ask(left, mid)){
            if(left == mid){
                ans(left);
                return;
            }
            else right = mid;
        }
        else{
            if(mid + 1 == right){
                ans(right);
                return;
            }
            else left = mid + 1;
        }
    }
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