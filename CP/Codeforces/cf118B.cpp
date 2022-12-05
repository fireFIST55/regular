#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,j,k,n;
    cin>>n;
    for(i=0;i<=n*2;i++){
        for(j=0,k=0;j<=n;j++){
            if((i<=n&&j>=n-i)||(i>n&&j>=i-n)){
                cout<<k;
                if(j<n)
                    cout<<" ";
                k++;
            }
            else
                cout<<"  ";
        }
        if(k)
            k-=1;
        while(k--)
            cout<<" "<<k;
        cout<<"\n";
    }
    return 0;
}
