#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        int n,r,p,q,count=0,count1=0;
        scanf("%d %d %d %d",&n,&r,&p,&q);
        if(r==1&&n==2){
            int x=1;
            for(int i=1;x;i++){
                x=pow(5,i)+.0000001;
                x=n/x;
                count+=x;
            }
            int j=i;
            //number of twos
            for(int i=1;x;i++){
                x=pow(2,i)+.0000001;
                x=n/x;
                count1+=x;
            }
            int left=count1-count;
            if(p==5){
                x=1;
                for(int j;x;j++){
                    if(j<=left)
                        left-=j;
                    else
                        break;
                    x=n/(pow(5,j)+.0000001);
                    count+=x;
                }
            }
        }
    }
}
