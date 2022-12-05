#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, n, m, un = 0, last;
    cin >> n >> m;
    vector<int>ini(n), pa(m), ans(m), freq(n + 1);
    deque<int>lagbe[n + 1];

    for(int &X: ini)    cin >> X;
    for(int i = 0; i < n; i += 1){
        cin >> a;
        freq[a] = i + 1;
        if(ini[i] != a) un += 1, lagbe[a].push_back(i + 1);
    }

    for(int &i: pa) cin >> i;
    if(!un){
        last = 0;
        for(int i = m - 1; i >= 0; i -= 1){
            if(!freq[pa[i]] && !last){
                // cout<<"Baba mara ki ekhane khaiso?1\n";
                cout << "NO\n";
                return;
            }
            else{
                if(last)    ans[i] = last;
                else ans[i] = freq[pa[i]], last = freq[pa[i]];
            }
        }

        cout << "YES\n";
        for(int X: ans) cout << X << " ";
        cout << '\n';
        return;
    }

    for(int i = m - 1; i >= 0; i -= 1){
        if(!lagbe[pa[i]].empty()){
            un -= 1;
            ans[i] = lagbe[pa[i]].back();
            lagbe[pa[i]].pop_back();
        }
    }

    if(un){
        cout<<"NO\n";
        return;
    }

    last = 0;
    for(int i = m - 1; i >= 0; i -= 1){
        if(!ans[i] && !last && !freq[pa[i]]){
            // cout<<"painter:\t" << i + 1<< " " << pa[i] << endl;
            // cout<<"Baba mara ki ekhane khaiso?2\n";
            cout << "NO\n";
            return;
        }
        else if(ans[i]) last = ans[i];
        else if(last) ans[i] = last;
        else if(freq[pa[i]]) last = ans[i] = freq[pa[i]];
        else last = ans[i];
    }

    cout << "YES\n";
    for(int X: ans) cout << X << " ";
    cout << '\n';
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