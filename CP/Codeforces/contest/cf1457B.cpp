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
        int n,k,r=0,l=0,r1=0,l1=0,max=0,x,count=0,y,z,length=0,length1;
        cin>>n>>k;
        vector<int>a(n),b(100);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]-1]++;
            if(max<b[a[i]-1]){
                max=b[a[i]-1];
                z=a[i];
            }
            if(i&&y==a[i])
                l1=i+1;
            else if(i&&y!=a[i]){
                length1=l1-r1+1;
                if(length<length1){
                    r=r1;
                    l=l1;
                    length=length1;
                }
                r1=0;
                l1=0;
            }
            y=a[i];
            if(!r1)
                r1=i+1;
        }
        if(max==1){
            if((n-1)%k)
                cout<<(n-1)/k+1<<"\n";
            else
                cout<<(n-1)/k<<"\n";
        }
        else if(r1&&l1&&!r&&!l)
            cout<<0<<"\n";
        else{
            if(!r&&!l)
                x=z;
            for(int i=0;i<n;i++){
                while(a[i]==x&&i<n)
                    i++;
                if(i<n)
                    count++;
                else
                    break;
                if(i+k<n)
                    i+=k-1;
                else
                    break;
            }
            cout<<count<<"\n";
        }
    }
    return 0;
}