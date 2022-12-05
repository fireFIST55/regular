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
        int n;
        cin>>n;
        if(n==1)
            cout<<"FastestFinger";
        else if(n&1)
            cout<<"Ashishgup";
        else{
            int x,total=0,y=n;
            while(!(n%2)){
                n/=2;
                total+=1;
            }
            x=total;
            for(int i=3;i<=sqrt(n);i+=2){
                if(!(n%i)){
                    while(!(n%i)){
                        n/=i;
                        total+=1;
                        if(total>=3)
                            break;
                    }
                    if(total>=3)
                        break;
                }
            }
            if(n>1&&(n&1))
                total+=1;
            if(y==2||(total!=x&&total>=3))
                cout<<"Ashishgup";
            else
                cout<<"FastestFinger";

        }
        cout<<"\n";
    }
    return 0;
}