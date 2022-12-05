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
        int n,count=0;
        cin>>n;
        int size=0;
        vector<int>vec(n),totalX(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            totalX[i]=vec[i];
            if(i)
                totalX[i]+=totalX[i-1];
        }
        for(int i=1;i<n;i++){
            if(vec[i]>vec[i-1]){
                vec[i]+=vec[i-1];
                count+=1;
                size+=1;
            }
            else if(vec[i]<vec[i-1]){
                int j=i,x=vec[i],y=0;
                while(j<n&&x<vec[i-1]){
                    j++;
                    y++;
                    x+=vec[j];
                }
                if(j<n&&x==vec[i-1]){
                    count+=y;
                    size-=y;
                    i=j;
                    vec[i]=x;
                }
                else if(j<n&&x>vec[i-1]){
                    count+=size;
                    size=1;
                    vec[i]=totalX[i];
                }
                else{
                    count=n-i;
                    break;
                }
            }
        }
        cout<<"ANS: "<<count<<endl;
    }
    return 0;
}