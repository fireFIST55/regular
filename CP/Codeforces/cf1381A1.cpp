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
        int n,total=0;
        cin>>n;
        vector<int>arr;
        char a[n+3],b[n+3];
        cin>>a>>b;
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                if(a[0]!=b[i]){
                    a[i+1]='\0';
                    char b[i+3];
                    strcpy(b,a);
                    for(int j=i,k=0;j>=0;j--,k++){
                        b[j]=(b[j]=='0')?'1':'0';
                        a[k]=b[j];
                    }
                    total+=1;
                    arr.push_back(i+1);
                }
                else{
                    total+=2;
                    a[0]=a[0]=='1'?'0':'1';
                    a[i+1]='\0';
                    char b[i+3];
                    strcpy(b,a);
                    for(int j=i,k=0;j>=0;j--,k++){
                        b[j]=(b[j]=='0')?'1':'0';
                        a[k]=b[j];
                    }
                    arr.push_back(1);
                    arr.push_back(i+1);
                }
            }
        }
        cout<<total<<" ";
        for(int i=0;i<arr.size();i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}