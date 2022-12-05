#include<bits/stdc++.h>
using namespace std;
string big_MUL(string a,long long b ) {
    int carry=0;
    for(int i=0;i<a.size();i++){
        carry+=(a[i]-48)*b;
        a[i]=(carry%10+48);
        carry/=10;
    }
    while(carry){
        a+=(carry%10+48);
        carry/=10;
    }
    return a;
}
int main(void){
    int i,j,t,cs=1;
    scanf("%d",&t);
    while(t--){
        int a;
        long long int mul,n;
        scanf("%d",&a);
        vector<long long int>primeFac(10000),x;
        for(i=0;i<a;i++){
            scanf("%lld",&n);
            mul=1;
            while(!(n%2)){
                n/=2;
                mul*=2;
            }
            if(mul>1&&!primeFac[2])
                x.push_back(2);
            if(mul>1&&mul>primeFac[2])
                primeFac[2]=mul;
            for(j=3;j<=sqrt(n);j+=2){
                if(!(n%j)){
                    mul=1;
                    while(!(n%j)){
                        n/=j;
                        mul*=j;
                    }
                    if(!primeFac[j])
                        x.push_back(j);
                    if(primeFac[j]<mul)
                        primeFac[j]=mul;
                }
            }
            if(n>1){
                mul=n;
                if(!primeFac[n])
                    x.push_back(n);
                if(primeFac[n]<mul)
                    primeFac[n]=mul;
            }
        }
        string str1;
        str1="1";
        for(i=0;i<x.size();i++)
            str1=big_MUL(str1,primeFac[x[i]]);
        char ans[1000000];
		string s;
		s = str1;
		for (i = 0,j = s.size() - 1; i < s.size(); i++, j--)
			ans[i] = s[j];
		ans[s.size()]='\0';
		printf("Case %d: %s\n",cs++,ans);
    }
    return 0;
}