#include<bits/stdc++.h>
using namespace std;
#define M 1000005
#define ll long long
double ans[M];
void calc(){
    double y=0;
    for(int i=1;i<=M;i++){
        y+=log(i);
        ans[i]=y;
    }
}
int main(void){
    calc();
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        int n,base;
        ll ansX;
        scanf("%d %d",&n,&base);
        printf("Case %d: ",cs++);
        if(!n)
            printf("%d\n",1);
        else{
            ansX=ans[n]/log(base);
            ansX+=1;
            printf("%lld\n",ansX);
        }
    }
    return 0;
}