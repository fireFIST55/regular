#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,skip=0;
    bool frnd=1;
    int x[4][2]={{0,0},{0,1},{1,0},{1,1}},sk[]={0,0,1,1},prgF[]={1,0,1,0},prgM[]={0,1,0,1};
    cin>>n;
    vector<int>ar(n);
    for(auto &it:ar)    cin>>it;
    for(int i=0;i<n;i++){
        if(frnd){
            if(i+1<n){
                for(int j=0;j<4;j++){
                    if(x[j][0]==ar[i]&&x[j][1]==ar[i+1]){
                        skip+=sk[j];
                        i+=prgF[j];
                        break;
                    }
                }
            }
            else if(ar[i]==1)    skip+=1;
            frnd=0;
        }
        else{
            if(i+1<n){
                for(int j=0;j<4;j++){
                    if(x[j][0]==ar[i]&&x[j][1]==ar[i+1]){
                        i+=prgM[j];
                        break;
                    }
                }
            }
            else i+=1;
            frnd=1;
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