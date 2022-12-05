#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
    int n,ans=0;
    cin>>n;
    vector<string>vs;
    bool marked[n]={0};
    vector<int>templ(26,0),base(26,1);
    vector<vector<int>>frq(n,vector<int>(26,0));

    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        vs.push_back(a);
        for(int j=0;a[j];j++)
            frq[i][a[j]-97]=1;
    }

    for(int i=0;i<n;i++){
        if(!marked[i]){
            marked[i]=1;
            bool yes=0;
            for(int j=0;j<26;j++){
                if(templ[j]&frq[i][j])  yes=1;
                templ[j]|=frq[i][j];
            }
            if(!yes)    ans+=1;
            for(int j=0;j<n;j++){
                if(j!=i&&!marked[j]){
                    for(int k=0;k<26;k++){
                        if(frq[j][k]&&templ[k]){
                            for(int l=0;l<26;l++)
                                templ[l]|=frq[j][l];
                            marked[j]=1;
                            break;
                        }
                    }
                }
            }
        }
    }

    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();
    
    return 0;
}
