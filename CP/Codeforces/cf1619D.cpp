#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int a, friends, shops, ans = INT_MIN, sub = INT_MAX;
    cin>> shops>> friends;
    vector<pair<int, int>> info[friends];

    for(int i = 0; i < shops; i += 1){
        for(int j = 0; j < friends; j += 1){
            cin>> a;
            sub = min(sub, a);
            info[j].push_back({a, i});
        }
    }

    bool found;
    for(int i = 0; i < friends; i += 1) sort(info[i].begin(), info[i].end());
    int lv = max(0, shops - friends + 1);
    if(!lv){
        cout<< sub<< endl;
        return;
    }

    for(int i = 0; i < friends; i += 1){
        int mn = INT_MAX;
        map<int, int>freq;

        for(int j = 0; j < lv; j += 1)
            freq[info[i][j].second] = 1;
        for(int j = lv; j < shops; j += 1){
            if(info[i][lv - 1].first == info[i][j].first) freq[info[i][j].second] = 1;
            else break;
            cout<<"Ekhane ki baba tumi ghuro nai\n";
        }
        
        mn = min(mn, info[i][lv].first);
        cout<< "friend:\t"<< i<<" fun bf:\t"<< mn<< endl;
        for(int j = 0; j < friends; j += 1){
            for(int k = 0; k < lv && i != j ; k += 1){
                if(!freq[info[j][k].second]){
                    mn = min(mn, info[j][k].first);
                    found = 1;
                    break;
                }
            }

            if(!found)
                mn = min(mn, info[j][lv].first);
        }
        cout<< "friend:\t"<< i<<" fun af:\t"<< mn<< endl<<endl;

        ans = max(mn, ans);
    }

    cout<< ans<< endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}