#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        ull n,x,sum_even=0,sum_odd=0;
        cin>>n;
        vector<ull>a(n);
        for(ull i=0;i<n;i++){
            cin>>a[i];
            if(i&1)
                sum_odd+=a[i];
            else
                sum_even+=a[i];
        }
        if(sum_odd>sum_even){
            for(int i=0;i<n;i++){
                if(i&1)
                    cout<<a[i]<<" ";
                else
                    cout<<1<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(!(i&1))
                    cout<<a[i]<<" ";
                else
                    cout<<1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}