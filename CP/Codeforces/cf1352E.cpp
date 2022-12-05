#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,sum=0,ans=0;
    cin>>n;
    vector<int>vec(n),freq(n+1),checked(n+1),there(n+1);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        freq[vec[i]]+=1;
    }
    for(int i=0;i<n;i++){
        sum=0;
        int j=i;
        while(j<n&&sum+vec[j]<=n){
            sum+=vec[j];
            if(j!=i)    there[sum]=1;
            if(j!=i&&freq[sum]&&!checked[sum]){
                checked[sum]=1;
                ans+=freq[sum];
            }
            j+=1;
        }
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