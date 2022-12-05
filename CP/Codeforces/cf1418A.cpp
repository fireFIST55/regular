#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,f;
    unsigned long long int x,y,k,extra,total;
    cin>>t;
    while(t--){
        cin>>x>>y>>k;
        f=1;
        if(k>x){
            total=1+(k-x)/(x-1);
            if((k-x)%(x-1))
                total+=1;
            extra=(total-1)*(x-1)+x-k;
        }
        else if(k>1){
            total=1;
            extra=x-k;
        }
        else{
            total=0;
            extra=0;
            f=0;
        }
        if(!((k*y)%(x-1))&&f)
            total+=(k*y)/(x-1);
        else if(f){
            if((k*y)%(x-1)>extra)
                total+=((k*y)/(x-1))+1;
            else
                total+=((k*y)/(x-1));
        }
        else{
            total=1;
            if(k*y>x){
                total+=(k*y-x)/(x-1);
                if((k*y-x)%(x-1))
                    total+=1;
            }
            else if(k*y==x)
                total+=1;
        }
        cout<<total<<"\n";
    }
    return 0;
}
