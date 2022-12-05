//Have to be optimized!!!
#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define endl '\n'
ull ans;
int n;
void find_cost(vector<int>cost,ull curr,int i,int left,int right){
    if(!right&&!left){
        !ans?ans=curr:ans=min(ans,curr);
        return;
    }
    else if(i==n||(right&&left&&i==n-1))   return;
    else{
        int limit=i&1?right:left;
        for(int j=1;j<=limit;j++){
            if(i&1){
                if(right<j) return;
                find_cost(cost,curr+(ull)((ull)j*(ull)cost[i]),i+1,left,right-j);
            }
            else{
                if(left<j)  return;
                find_cost(cost,curr+(ull)((ull)j*(ull)cost[i]),i+1,left-j,right);
            }
        }
    }
}
void solve(){
    ans=0;
    cin>>n;
    vector<int>cost(n);
    for(auto &it:cost)   cin>>it;
    find_cost(cost,0,0,n,n);
    cout<<ans<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}