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
        int k,n;
        cin>>n>>k;
        char s[4]="abc";
        for(int i=0,j=0;i<n;i++,j++){
            cout<<s[j];
            if(j==2)
                j=-1;
        }
        cout<<"\n";
    }
    return 0;
}