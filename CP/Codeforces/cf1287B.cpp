#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n,k;
    ll ans=0;
    string s,base="SET";
    cin>>n>>k;
    map<string,ll>ms;
    vector<string>vs;

    for(int i=0;i<n;i++){
        cin>>s;
        ms[s]+=1;
        vs.push_back(s);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string s;
            for(int l=0;l<k;l++){

                if(vs[i][l]==vs[j][l])  s+=vs[i][l];
                else{
                    for(int p=0;p<3;p++){
                        if(vs[i][l]!=base[p]&&vs[j][l]!=base[p]){
                            s+=base[p];
                            break;
                        }
                    }
                }
            }
            ans+=ms[s];
        }
    }
    cout<<ans/3<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1;
    while(t--)
        solve();
    
    return 0;
}