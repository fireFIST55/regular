#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    deque<int>ocr[n + 1];
    vector<int>vc(n), ans;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        ocr[vc[i]].push_back(i);
    }

    int index = 0, maxIndex;
    while(index != n){
        maxIndex = index;
        for(int i = 0; i <= n; i += 1){
            while(!ocr[i].empty() && ocr[i].front() < index) ocr[i].pop_front();
            if(ocr[i].empty()){
                ans.push_back(i);
                index = maxIndex + 1;
                break;
            }
            else maxIndex = max(maxIndex, ocr[i].front());
        }
    }

    cout << ans.size() << '\n';
    for(int i: ans) cout << i << ' ';
    cout << '\n';
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