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
        string a;
        cin>>a;
        int count=0;
        for(int i=0;a[i];i++){
            if(a[i]=='w')
                count+=1;
            else if(a[i]=='v'&&i+1<a.length()&&a[i+1]=='v')
                count+=1;
        }
        cout<<count<<"\n";
    }
    return 0;
}