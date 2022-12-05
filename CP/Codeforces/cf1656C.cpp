#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    map<int, int>freq;

    for(int &i: vc){
        cin >> i; freq[i] += 1;
    }
    sort(vc.begin(), vc.end());

    if(!freq[1]){
        cout << "Yes\n";
        return;
    }
    else if(freq[0] && freq[1]){
        cout << "No\n";
        return;
    }

    for(int i = 1; i < n; i += 1){
        if(vc[i] - vc[i - 1] == 1){
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
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