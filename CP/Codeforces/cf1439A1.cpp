#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,moves=0;
    cin>>n>>m;
    vector<int>ans;
    char str[n][m+3];
    for(int i=0;i<n;i++)
        cin>>str[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+1<n){
                if(str[i][j]=='1'){
                    //cout<<"i:\t"<<i<<" j:\t"<<j<<endl;
                    str[i][j]='0';
                    moves+=1;
                    ans.push_back(i);
                    ans.push_back(j);
                    str[i+1][j]=str[i+1][j]=='1'?'0':'1';
                    ans.push_back(i+1);
                    ans.push_back(j);
                    if(j+1<m){
                        str[i][j+1]=str[i][j+1]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j+1);
                    }
                    else{
                        str[i+1][j-1]=str[i+1][j-1]=='1'?'0':'1';
                        ans.push_back(i+1);
                        ans.push_back(j-1);
                    }
                }
            }
            else{
                if(j+1<m){
                    if(str[i][j]=='1'){
                        //cout<<"i:\t"<<i<<" j:\t"<<j<<endl;
                        moves+=3;
                        ans.push_back(i);
                        ans.push_back(j);
                        str[i][j]=str[i][j]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j);
                        str[i-1][j]=str[i-1][j]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j+1);
                        str[i-1][j+1]=str[i-1][j+1]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j+1);
                        str[i][j+1]=str[i][j+1]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j);
                        str[i][j]=str[i][j]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j+1);
                        str[i-1][j+1]=str[i-1][j+1]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j);
                        str[i][j]=str[i][j]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j+1);
                        str[i][j+1]=str[i][j+1]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j);
                        str[i-1][j]=str[i-1][j]=='1'?'0':'1';
                    }
                }
                else{
                    if(str[i][j]=='1'){
                        //cout<<"i:\t"<<i<<" j:\t"<<j<<endl;
                        moves+=3;
                        ans.push_back(i);
                        ans.push_back(j);
                        str[i][j]=str[i][j]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j);
                        str[i-1][j]=str[i-1][j]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j-1);
                        str[i-1][j-1]=str[i-1][j-1]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j-1);
                        str[i][j-1]=str[i][j-1]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j);
                        str[i][j]=str[i][j]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j-1);
                        str[i-1][j-1]=str[i-1][j-1]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j);
                        str[i][j]=str[i][j]=='1'?'0':'1';
                        ans.push_back(i);
                        ans.push_back(j-1);
                        str[i][j-1]=str[i][j-1]=='1'?'0':'1';
                        ans.push_back(i-1);
                        ans.push_back(j);
                        str[i-1][j]=str[i-1][j]=='1'?'0':'1';
                    }
                }
            }
        }
    }
    cout<<moves<<"\n";
    for(int i=1;i<=ans.size();i++){
        cout<<ans[i-1]+1<<" ";
        if(!(i%6))
            cout<<"\n";
    }
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
}