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
        int n,ans=1;
        cin>>n;
        vector<int>arr(n);
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            vec.push_back(make_pair(arr[i],i));
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            cout<<vec[i].first<<" "<<arr[i]<<" "<<__gcd(vec[i].first,arr[i])<<endl;
            if(arr[i]!=vec[i].first){
                if(__gcd(vec[i].first,arr[i])==vec[0].first){
                    int temp=arr[i];
                    arr[i]=vec[i].first;
                    arr[vec[i].second]=temp;
                }
                else if(arr[i]%vec[0].first){
                    ans=0;
                    break;
                }
                else{
                    int j;
                    for(j=i+1;j<n;j++){
                        if((__gcd(vec[i].first,arr[j])==vec[0].first)&&(__gcd(arr[i],arr[j])==vec[0].first)){
                            swap(arr[i],arr[vec[i].second]);
                            break;
                        }
                    }
                    if(j==n){
                        ans=0;
                        //break;
                    }
                }
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}