#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    char c='1';
    bool seal = 0;
    string s, ans;
    int n, a, last = -1, prev = -1, index = -1;
    cin>>n>>s;
    ans = s;
    vector<pair<int,int>>vp;

    for(int i = 0; i<n; i++)
        vp.push_back({s[i]-48, i});
    sort(vp.begin(), vp.end());

    for(int i = 0; i<n; i++){
        pair<int, int>pi= vp[i];
        if(prev>pi.second){
            c = '2';
            if(last== -1){
                index = prev;
                last = pi.first;
                prev = -1;
                int j = i;
                while(j<n&&vp[j].first==last){
                    if(vp[j].second<index){
                        if(vp[j].second<prev){
                            cout<<'-'<<endl;
                            return;
                        }
                        else    ans[vp[j].second]=c;
                        prev = vp[j].second;
                    }
                    else{
                        ans[vp[j].second] = '1';
                        index = vp[j].second;
                    }
                    j+=1;
                }
                i = j-1;
            }
            else{
                cout<<'-'<<endl;
                return;
            }
        }
        else ans[pi.second] = c,prev = pi.second;;
    }
    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}