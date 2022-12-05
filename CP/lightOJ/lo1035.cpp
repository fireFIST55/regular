#include<bits/stdc++.h>
using namespace std;
int primeFac[101][101]={0};
void calc(){
    int i,j,n;
    for(n=2;n<=100;n++){
        i=n;
        primeFac[n][2]=primeFac[n-1][2];
        while(!(i%2)){
            i/=2;
            primeFac[n][2]++;
        }
        for(j=3;j<=n-1;j++)
            primeFac[n][j]=primeFac[n-1][j];
        for(j=3;j*j<=i;j+=2){
            if(!(i%j)){
                while(!(i%j)){
                    i/=j;
                    primeFac[n][j]++;
                }
            }
        }
        if(i>1)
            primeFac[n][i]+=1;
    }
}
int main(void){
    calc();
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("Case %d: %d = ",cs++,n);
        for(int i=2;i<=n;i++){
            if(i==2)
                printf("%d (%d)",i,primeFac[n][i]);
            else if(i>2&&primeFac[n][i])
                printf(" * %d (%d)",i,primeFac[n][i]);
        }
        printf("\n");
    }
    return 0;
}