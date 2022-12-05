#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<int>a, b, both;
    int n, k, time, al, bl; cin >> n >> k;;

    for(int i = 0; i < n; i += 1){
        cin >> time >> al >> bl;

        if(al || bl){
            if(al && bl) both.push_back(time);
            else if(al) a.push_back(time);
            else b.push_back(time);
        }
    }

    if(both.size() + a.size() + b.size() < k) cout << - 1;
    else{
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(both.begin(), both.end());

        int i = 0, j = 0, l = 0, fa = 0, fb = 0, ans = 0, na = a.size(), nb = b.size(), nbth = both.size();

        if(nbth){
            for(; l < nbth && fa < k && fb < k;){
                if(i < na && j < nb){
                    if(both[l] <= a[i] + b[j]) ans += both[l++];
                    else ans += (a[i++] + b[j++]);
                }
                else ans += both[l++];

                fa += 1; fb += 1;
            }
        }

        if(k - fa > na - i || k - fb > nb - j){
            cout << - 1  << '\n';
            return;
        }

        for(; i < na && fa < k; i += 1, fa += 1)    ans += a[i];
        for(; j < nb && fb < k; j += 1, fb += 1)    ans += b[j];

        cout << ans;
    }

    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}