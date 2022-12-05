#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        int n,xy=0;
        cin>>n;
        queue<int>mn;
        deque<int>mx;
        vector<int>arr(n),ans_min(n),ans_max(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(!i||arr[i]!=arr[i-1]){
                ans_min[i]=ans_max[i]=arr[i];
                xy+=1;
                while(xy<arr[i]){
                    mn.push(xy);
                    mx.push_back(xy);
                    xy+=1;
                }
                xy=arr[i];
            }
            else{
                ans_min[i]=mn.front();
                mn.pop();
                ans_max[i]=mx.back();
                mx.pop_back();
            }
        }
        for(auto it:ans_min)    cout<<it<<' ';
        cout<<endl;
        for(auto it:ans_max)    cout<<it<<' ';
        cout<<endl;
    }
    return 0;
}