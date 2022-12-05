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
        int n,m,count=0;
        cin>>n>>m;
        int sub[n][m]={0};
        char spruce[n][m+3];
        for(int i=0;i<n;i++)
            cin>>spruce[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(spruce[i][j]=='*')
                    count++;
                if(!sub[i][j]&&j&&i<n-1&&spruce[i][j]=='*'){
                    for(int k=j,l=i+1,z=1;l<n;l++,z++){
                        if(spruce[l][k]=='*'){
                            int a=k+1,b=0;
                            while(a<m&&spruce[l][a]=='*'&&b<z){
                                b++;
                                a++;
                            }
                            if(b==z){
                                a=k-1;
                                b=0;
                                while(a>=0&&spruce[l][a]=='*'&&b<z){
                                    a--;
                                    b++;
                                }
                                if(b==z){
                                    count+=1;
                                    sub[l][k]=z;
                                    for(int r=k-1,s=z;s>0;r--,s--)
                                        sub[l][r]=z;
                                    for(int r=k+1,s=z;s>0;r++,s--)
                                        sub[l][r]=z;
                                }
                            }
                            else
                                break;
                        }
                        else
                            break;
                    }
                }
                else if(sub[i][j]&&j&&i<n-1&&spruce[i][j]=='*'){
                    int p=i+1;
                    while(p<n&&sub[p][j])
                        p++;
                    if(p<n){
                        int x=sub[p][j]-sub[i][j];
                        for(int k=j,l=p,z=x;l<n;l++,z++){
                            if(spruce[l][k]=='*'){
                                int a=k+1,b=0;
                                while(a<m&&spruce[l][a]=='*'&&b<z){
                                    b++;
                                    a++;
                                }
                                if(b==z){
                                    a=k-1;
                                    b=0;
                                    while(a>=0&&spruce[l][a]=='*'&&b<z){
                                        a--;
                                        b++;
                                    }
                                    if(b==z){
                                        count+=1;
                                        sub[l][k]=z;
                                        for(int r=k-1,s=z;s>0;r--,s--)
                                            sub[l][r]=z;
                                        for(int r=k+1,s=z;s>0;r++,s--)
                                            sub[l][r]=z;
                                    }
                                }
                                else
                                    break;
                            }
                        else
                            break;
                        }
                    }
                    else
                        break;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}