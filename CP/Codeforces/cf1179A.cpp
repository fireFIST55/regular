#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define endl '\n'

void solve(){
    int n, q, a, mx = -1;
    cin>>n>>q;
    deque<int>dq;
    vector<int>vec(n), ans(n), base;

    for(int i = 0; i<n; i++){
        cin>>a;
        vec[i] = a;

        if(!i)  dq.push_back(a);
        else{
            int x = dq.front();
            dq.pop_front();
            if(x>a){
                dq.push_front(x);
                dq.push_back(a);
            }
            else{
                dq.push_front(a);
                dq.push_back(x);
            }
        }
        mx = max(mx, vec[i]);
        if(!i)  ans[i] = vec[i];
        else ans[i] = ans[i-1]<vec[i]?vec[i]:ans[i-1];
    }

    dq.pop_front();
    while(!dq.empty()){
        base.push_back(dq.front());
        dq.pop_front();
    }

    ull b;
    for(int i = 0; i<q; i++){
        cin>>b;

        if(b-1<n){
            cout<<ans[b-1]<<' ';
            if(b<n) cout<<vec[b];
            else  cout<<base[0];
            cout<<endl;
        }
        else{
            cout<<mx<<' ';
            cout<<base[(b-n)%(n-1)]<<endl;
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();

    return 0;
}