#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,skip=0;
    cin>>n;
    vector<int>vec(n);
    for(auto &it:vec)   cin>>it;
    if(vec[0])  skip+=1;
    for(int i=1;i<n;i++){
        if(vec[i]){
            int j=i;
            while(j<n&&vec[j]==1)   j+=1;
            skip+=(j-i)/3;
            i=j-1;
        }
    }
    cout<<skip<<endl;
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