#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n;
    vector<int>ans(n,n+1);
    vector<int>freq(n+1),arr;
    vector<vector<int>>vec(n+1);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(!freq[a]){
            arr.push_back(a);
            freq[a]+=1;
        }
        vec[a].push_back(i);
    }
    for(int i=0;i<arr.size();i++){
        int start=-1,mx=0;
        for(auto &it:vec[arr[i]]){
            mx=max(mx,it-start);
            start=it;
        }
        mx=max(mx,n-start);
        ans[mx-1]=min(ans[mx-1],arr[i]);
    }
    for(int i=0,k=n+1;i<n;i++){
        if(min(k,ans[i])==n+1)
            cout<<-1<<' ';
        else
            cout<<min(k,ans[i])<<" ";
        k=min(k,ans[i]);
    }
    cout<<'\n';
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}