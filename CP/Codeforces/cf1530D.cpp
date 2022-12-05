#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n, tot = 0;
    cin>>n;
    deque<int>dq;
    map<int, int>mp;
    vector<int>vc(n);

    for(int i = 0; i<n; i++){
        cin>>vc[i];
        mp[vc[i]] += 1;
    }

    for(int i = 1; i<=n; i++){
        if(!mp[i])  dq.push_back(i), tot+=1;
    }

    cout<<n-tot<<endl;
    for(int i = 0; i<n; i++){

        if(mp[vc[i]]>1){
            int x = dq.back();

            if(x == i+1)
                cout<<vc[i];
            else{
                dq.pop_back();
                cout<<x;
                mp[vc[i]] -=1;
            }
        }
        else cout<<vc[i];

        cout<<' ';
    }

    cout<<endl;
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