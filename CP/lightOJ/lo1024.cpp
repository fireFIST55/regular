#include<bits/stdc++.h>
using namespace std;
unsigned long long int gcd(unsigned long long int a,unsigned long long int b){
    if(!b)
        return a;
    else return gcd(b,a%b);
}
int main(void){
    int i,j,t,n,c=0;
    scanf("%d",&t);
    while(t--){
        c++;
        scanf("%d",&n);
        unsigned long long int res=1;
        vector<unsigned long long int>a(n);
        for(i=0;i<n;i++)
            scanf("%llu",&a[i]);
        sort(a.begin(),a.end());
        for(i=n-1;i>=0;i--)
            res=((res*a[i])/(gcd(a[i],res)));
        printf("Case %d: %llu\n",c,res);
    }
    return 0;
}

