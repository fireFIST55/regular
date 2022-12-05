#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>freq(n),freq1(n),x(n),z;
        int min=n+1,k;
        for(int i=0;i<n;i++){
            cin>>x[i];
            if(!i)
                z.push_back(x[i]);
            else{
                if(k!=x[i])
                    z.push_back(x[i]);
            }
            freq1[x[i]-1]++;
            k=x[i];
        }
        if(freq1[x[0]-1]==n)
            cout<<0<<"\n";
        else{
            int length=z.size();
            for(int i=0;i<length;i++){
                if(i&&i<length-1){
                    freq[z[i]-1]++;
                }
            }
            for(int i=0;i<n;i++){
                if(min>freq[x[i]-1])
                    min=freq[x[i]-1];
            }
            cout<<min+1<<"\n";
        }
    }
    return 0;

}
