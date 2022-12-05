#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,j,n,m,t;
    char ch='B',ch1='W';
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(m&1){
                    if(!(n&1)&&i==n-1&&j==m-1)
                        cout<<ch;
                    else if(i&1){
                        if(j&1)
                            cout<<ch;
                        else
                            cout<<ch1;
                    }
                    else{
                        if(j&1)
                            cout<<ch1;
                        else
                            cout<<ch;
                    }
                }
                else{
                    if(i==n-2&&j==m-1)
                        cout<<ch;
                    else if(i==n-2&&j==m-2)
                        cout<<ch1;
                    else if(i==n-1&&j>=m-2)
                        cout<<ch;
                    else if(j&1)
                        cout<<ch1;
                    else
                        cout<<ch;
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}
