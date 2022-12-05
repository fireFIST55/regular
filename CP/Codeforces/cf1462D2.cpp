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
        int n,sum=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=n;i>=1;i--){
            if(!(sum%i)){
                int needSum=sum/i,currSum=0;
                bool yes=true;
                if(i>1){
                    for(int j=0;j<n;j++){
                        currSum+=a[j];
                        if(currSum==needSum)
                            currSum=0;
                        else if(currSum>needSum){
                            yes=false;
                            break;
                        }
                    }
                }
                if(yes){
                    cout<<n-i<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}