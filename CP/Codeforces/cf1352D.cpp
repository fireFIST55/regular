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
        int n,x,y,moves=0,a=0,b=0;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        for(int i=0,j=n;i<j;){
            if(!moves){
                a=vec[i];
                x=a;
                moves+=1;
            }
            else{
                y=0;
                if(moves&1){
                    j-=1;
                    if(i!=j)
                        moves+=1;
                    while(i<j&&y<=x){
                        y+=vec[j];
                        if(y<=x)
                            j-=1;
                    }
                    b+=y;
                }
                else{
                    i+=1;
                    if(i!=j)
                        moves+=1;
                    while(i<j&&y<=x){
                        y+=vec[i];
                        if(y<=x)
                            i+=1;
                    }
                    a+=y;
                }
                x=y;
            }
        }
        cout<<moves<<" "<<a<<" "<<b<<"\n";
    }
    return 0;
}