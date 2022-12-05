#include<bits/stdc++.h>
#define ll long long
using namespace std;

int ans = 0;
void merge(vector<int>&vc, int left, int mid, int right){
    int n = mid - left + 1, m = right - mid;
    vector<int>lft(n), rght(m);
    for(int i = left, k = 0; i <= mid; i += 1, k += 1) lft[k] = vc[i];
    for(int i = mid + 1, k = 0; i <= right; i += 1, k += 1) rght[k] = vc[i];
    int i = 0, j = 0, index = left;
    while(i < n && j < m){
        if(lft[i] <= rght[j]) vc[index++] = lft[i++], ans += 1;
        else vc[index++] = rght[j++], ans += 1;
    }
    while(i < n) vc[index++] = lft[i++], ans += 1;
    while(j < m) vc[index++] = rght[j++], ans += 1;
}

void mergeSort(vector<int>&vc, int left, int right){
    if(left >= right) return;
    int mid = (left + right) >> 1;
    mergeSort(vc, left, mid); mergeSort(vc, mid + 1, right);
    merge(vc, left, mid, right);
}

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    mergeSort(vc, 0, n - 1);
    cout << vc[0];
    for(int i = 1; i < n; i += 1) cout << " " << vc[i];
    cout << '\n' << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}