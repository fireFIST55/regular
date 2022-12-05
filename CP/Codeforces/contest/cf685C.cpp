#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,i,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int chance=0,extra=0,ans=1,length,lift=0;
        vector<int>freq(26),freq1(26);
        string str,str1;
        cin>>str>>str1;
        if(str==str1)
            cout<<"Yes";
        else{
            for(i=0;str[i];i++){
                freq[str[i]-97]++;
                freq1[str1[i]-97]++;
                if(freq[str[i]-97]>1)
                    chance=1;
            }
            for(i=0;i<26;i++){
                if(freq[i]!=freq1[i])
                    break;
            }
            if(i==26)
                cout<<"Yes";
            else if(chance){
                for(i=0;i<26;i++){
                    if(freq1[i]<=freq[i]){
                        extra+=freq[i]-freq1[i];
                        if(freq1[i]-lift<=n-k+1)
                            lift+=(n-k+1)-freq1[i];
                        else{
                            ans=0;
                            break;
                        }
                    }
                    else{
                        if(freq[i]+extra<freq1[i]){
                            ans=0;
                            break;
                        }
                        else
                            extra+=freq[i]+extra-freq1[i];
                    }
                }
                if(ans)
                    cout<<"Yes";
                else
                    cout<<"No";
            }
            else
                cout<<"No";
        }
        cout<<"\n";
    }
}
