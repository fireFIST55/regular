#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    encoding_898;
    int i,n,flag=0,array[14]={4,7,44,77,47,74,777,444,447,744,474,774,747,477};
    cin>>n;
    for(i=0;i<14;i++){
        if(n==array[i]){
            flag=1;
            break;
        }
    }
    if(!flag){
        for(i=0;i<14;i++){
            if(!(n%array[i])){
                flag=1;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
