#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        ull x,z=1,count=1;
        cin>>x;
        x-=1;
        for(int i=1;x;i++){
            ull y=(pow(2,i)+.0000001)+z,p=(y*(y+1))/2;
            if(p<=x){
                count+=1;
                x-=p;
                z=y;
            }
            else
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}