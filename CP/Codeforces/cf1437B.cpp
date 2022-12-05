#define encoding_898    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--){
        char ch;
        int n,count=0;
        cin>>n;
        char str[n+5];
        cin>>str;
        for(int i=1;i<strlen(str);i++){
            if(str[i]==str[i-1]){
                int j=i,k=0,x=1,y=0;
                char ab[n];
                count+=1;
                while(j+1<n&&str[j]==str[j+1]){
                    j++;
                    ab[k]=str[j];
                    k++;
                }
                ab[k]='\0';
                if(j==i)
                    y=1;
                while(j+1<n&&str[j]!=str[j+1]){
                    j++;
                    x+=1;
                }
                if(y&&j==n)
                    break;
                else{
                    if(str[j]==str[i])
                        x-=1;
                    if(!y)
                        strncpy(str+i+x,ab,k);
                    i+=x;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}