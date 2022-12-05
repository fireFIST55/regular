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
        int n,freq[50]={0},count=0;
        cin>>n;
        vector<double>x(n);
        map<double,int>Area;
        for(int i=0;i<n;i++){
            cin>>x[i];
            if(i){
                double a=sqrt(abs(x[i]-x[0])),b=sqrt(x[i]+1),c=sqrt(x[0]+1);
                if(a+b>=c&&b+c>=a&&c+a>=b){
                    double area=.5*a;
                    if(!Area[area]){
                        count+=1;
                        Area[area]=1;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){
                double a=sqrt(abs(x[i]-x[j])),b=sqrt(x[i]+1),c=sqrt(x[j]+1);
                if(a+b>=c&&b+c>=a&&c+a>=b){
                    double area=.5*a;
                    if(!Area[area]){
                        count+=1;
                        Area[area]=1;
                    }
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}