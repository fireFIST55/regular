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
        int rock=0,paper=0,scissor=0;
        string a;
        cin>>a;
        for(int i=0;a[i];i++){
            if(a[i]=='R')
                rock+=1;
            else if(a[i]=='P')
                paper+=1;
            else
                scissor+=1;
        }
        char ch=(rock>paper)?(rock>scissor)?'P':'R':(paper>scissor)?'S':'R';
        for(int i=0;a[i];i++)
            cout<<ch;
        cout<<"\n";
    }
    return 0;
}