#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        double ab,ac,bc,de,ad,ratio,x;
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&ratio);
        x=sqrt(ratio/(ratio+1));
        ad=x*ab;
        printf("Case %d: %lf\n",cs++,ad);
    }
    return 0;
}