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
        int n,x=0,pos,temp;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]>x){
                x=vec[i];
                pos=i;
            }
        }
        temp=vec[0];
        vec[0]=vec[pos];
        vec[pos]=temp;
        int a=vec[0];
        for(int i=1;i<n;i++){            
            pos=i;
            for(int j=i+1;j<n;j++){
                int y=__gcd(a,vec[j]);
                x=__gcd(a,vec[pos]);
                pos=(x==y)?vec[pos]>vec[j]?pos:j:x>y?pos:j;
            }
            temp=vec[i];
            vec[i]=vec[pos];
            vec[pos]=temp;
            a=__gcd(a,vec[i]);
        }
        for(int i=0;i<n;i++)
            cout<<vec[i]<<" ";
        cout<<"\n";
    }
    return 0;
}