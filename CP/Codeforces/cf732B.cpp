#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,k,total=0;
    cin>>n>>k;
    int i,array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
        if(i&&array[i]+array[i-1]<k){
            total+=(k-(array[i]+array[i-1]));
            array[i]+=(k-array[i]-array[i-1]);
        }
    }
    cout<<total<<"\n";
    for(i=0;i<n;i++)
        cout<<array[i]<<" ";
    return 0;
}
