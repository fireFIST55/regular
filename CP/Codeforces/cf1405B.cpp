#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t,n;
    long long int pos,total,ma,a;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0,pos=0,total=0;i<n;i++){
            cin>>a;
            if(a>0)
                pos+=a;
            else if(a<0){
                a*=(-1);
                cout<<a<<" "<<pos<<endl;
                ma=a<pos?a:pos;
                a-=ma;
                pos-=ma;
                total+=a;
                cout<<"total  :"<<total<<endl;
            }
        }
        cout<<total+pos<<"\n";
    }
    return 0;
}
