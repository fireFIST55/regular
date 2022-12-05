#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        string ab;
        cin>>ab;
        int count=0,n=ab.length()-1;
        for(int i=0;i<ab.length();i+=2){
            if(!(i%25))
                int freq[26]={0};
            
        }
        if(ab.length()>2&&ab.length()&1&&ab[n-1]==ab[n-2]&&ab[n-2]==ab[n-3])
            count+=1;
        cout<<count<<"\n";
    }
    return 0;
}