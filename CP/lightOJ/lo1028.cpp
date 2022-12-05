#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        ull n;
        int count=0;
        scanf("%llu",&n);
        for(ull i=2;i<=sqrt(n);i++){
            if(!(n%i)){
                ull x=n,rem;
                int ans=1;
                while(x>0){
                    rem=log(x)/log(i);
                    x-=(pow(i,rem)+.00001);
                    if(x==1){
                        ans=0;
                        break;
                    }
                }
                if(ans)
                    count++;
            }
        }
        printf("\nCase %d: %d\n",cs++,count+1);
    }
    return 0;
}