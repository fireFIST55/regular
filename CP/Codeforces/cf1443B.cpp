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
        int a,b,x=0,zero=0,total=0;
        cin>>a>>b;
        string mine;
        cin>>mine;
        for(int i=0;i<mine.length();i++){
            if(mine[i]=='1')
                x=1;
            if(x){
                total=a;
                while(mine[i]){
                    while(mine[i]&&mine[i]=='1'){
                        if(zero)
                            total+=min(a,zero*b);
                        zero=0;
                        i++;
                    }
                    while(mine[i]&&mine[i]=='0'){
                        zero++;
                        i++;
                    }
                }
            }
        }
        cout<<total<<"\n";
    }
    return 0;
}