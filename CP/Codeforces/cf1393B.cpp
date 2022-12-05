#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n;
    cin>>n;
    int a,q,k=0,total=n,same2=0,same4=0;
    vector<int>x(n);
    for(int i=0;i<n;i++){
        cin>>a;
        x[a-1]+=1;
        if(x[a-1]>3){
            same2-=1;
            same4+=1;
        }
        else if(x[a-1]>1)
            same2+=1;
    }
    cin>>q;
    char ch;
    for(int i=0;i<q;i++){
        cin>>ch>>a;
        if(ch=='+'){
            x[a-1]+=1;

        }
    }
}