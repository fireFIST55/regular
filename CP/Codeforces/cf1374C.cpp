#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(void){
    encoding_898;
    int i,j,n,t,total;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        string str;
        cin>>str;
        for(j=0,total=0;j<n;j++){
            if(str[j]=='(')
                total+=1;
            else if(total&&str[j]==')')
                total-=1;
        }
        cout<<total<<"\n";
    }
    return 0;
}