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
        int n,sum=0,count=0;
        cin>>n;
        vector<int>arr(n),accum(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            accum[i]=sum;
        }
        for(int i=1;i<n;i++){
            if(arr[i-1]<arr[i]){
                arr[i-1]=accum[i-1];
                count=(i-1);
                if(arr[i-1]<arr[i]){
                    count+=1;
                    arr[i]=accum[i];
                }
                else if(arr[i-1]>arr[i])
                    i-=1;
            }
            else if(arr[i]<arr[i-1]){
                int j=i+1,sum=arr[i];
                while(j<n&&sum+arr[j]<arr[i-1]){
                    sum+=arr[j];
                    j++;
                }
                if(j==n){
                    count=n-1;
                    break;
                }
                else{
                    if(sum+arr[j]==arr[i-1]){
                        count+=j-i;
                        i=j;
                        arr[j]=sum+arr[j];
                    }
                    else{
                        count+=1;
                        arr[i]+=arr[i-1];
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}