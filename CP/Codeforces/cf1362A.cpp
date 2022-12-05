#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,t;
    cin>>t;
    unsigned long long int a,b,total,x[3]={8,4,2};
    while(t--){
        cin>>a>>b;
        if(a==b)
            cout<<0;
        else if(a>b){
            total=0;
            for(i=0;i<3&&a>b;){
                if(!(a%x[i])){
                    if(a/x[i]>=b){
                        total++;
                        a/=x[i];
                    }
                    else
                        i++;
                }
                else
                    i++;
            }
            if(a==b)
                cout<<total;
            else
                cout<<-1;
        }
        else{
            total=0;
            for(i=0;i<3&&a<b;){
                if(a*x[i]<=b){
                    a*=x[i];
                    total++;
                }
                else
                    i++;
            }
            if(a==b)
                cout<<total;
            else
                cout<<-1;
        }
        cout<<"\n";
    }
    return 0;
}
