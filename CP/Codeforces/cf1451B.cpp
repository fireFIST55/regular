#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string str,str1;
        int i,chance=0,ans=1,bench=0;
        cin>>str>>str1;
        if(str!=str1){
            vector<int>freq(26),freq1(26);
            for(i=0;str[i];i++){
                if(freq[str[i]-97])
                    chance=1;
                freq[str[i]-97]++;
                freq1[str1[i]-97]++;
            }
            for(i=0;i<26;i++){
                if(freq[i]!=freq1[i])
                    break;
            }
            if(i<26&&!chance)
                ans=0;
            else if(chance&&i<26&&(n-k+1)>1){
                for(i=0;i<26;i++){
                    if(freq1[i]>freq[i]+bench){
                        ans=0;
                        break;
                    }
                    else{
                        bench+=freq[i]+bench-freq1[i];
                        if((n-k+1)==2&&(freq1[i]&1)){
                            ans=0;
                            break;
                        }
                    }
                }
            }
        }
        if(ans)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
    return 0;
}
