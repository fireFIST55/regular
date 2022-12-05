#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,y,total=0;
    long long int n,x;
    cin>>n>>x;
    if(x<=n*n){
        for(i=1;i<=sqrt(x)&&i<=n;i++){
            if(!(x%i)){
                y=x/i;
                if(y<=n){
                    total+=1;
                    if(y!=i)
                        total+=1;
                }
            }
        }
    }
    cout<<total;
    return 0;
}
