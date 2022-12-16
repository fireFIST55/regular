#include<bits/stdc++.h>
#define ll long long
using namespace std;

void merge(vector<int>&vc, int left, int mid, int right){
    int l = mid - left + 1, r = right - mid;
    vector<int>lftAr(l), rghtAr(r);
    for(int i = 0; i < l; i += 1) lftAr[i] = vc[left + i];
    for(int i = 0; i < r; i += 1) rghtAr[i] = vc[mid + 1 + i];
    int indexl = 0, indexr = 0, index = left;
    while(indexl < l && indexr < r){
        if(lftAr[indexl] <= rghtAr[indexr]) vc[index++] = lftAr[indexl++]; 
        else vc[index++] = rghtAr[indexr++];
    }

    while(indexl < l) vc[index++] = lftAr[indexl++];
    while(indexr < r) vc[index++] = rghtAr[indexr++];
}

void mergeSort(vector<int>&vc, int left, int right){
    if(left >= right) return;
    int mid = (left + right) >> 1;
    mergeSort(vc, left, mid);
    mergeSort(vc, mid + 1, right);
    merge(vc, left, mid, right);
}

void solve(){
    int n, t, done = 0, wasted = 0; cin >> t >> n;
    vector<int>dur(n);
    for(int &i: dur) cin >> i;
    mergeSort(dur, 0, n - 1);
    for(int i = 0; i < n; i += 1){
        if(wasted + dur[i] > t) break;
        else done += 1, wasted += dur[i];
    }
    if(done == n) cout << "BRAVO\n";
    else if(done) cout << done << " assignments done\n";
    else cout << "UNLUCKY\n";
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