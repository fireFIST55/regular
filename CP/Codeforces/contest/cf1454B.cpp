#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int n,t,i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>freq(n),x(n);
        int min=n+1;
        map<int,int>a;
        for(int i=0;i<n;i++){
            cin>>x[i];
            a[x[i]]=i;
            freq[x[i]-1]++;
        }
        for(int i=0;i<n;i++){
            if(freq[x[i]-1]==1){
                if(min>x[i])
                    min=x[i];
            }
        }
        if(min==n+1)
            cout<<-1<<"\n";
        else
            cout<<a[min]+1<<"\n";
    }
    return 0;
}
