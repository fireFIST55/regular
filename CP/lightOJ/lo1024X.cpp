#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main(void){
    int i,j,n,t,c=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ull res=1;
        vector<ull>vec(n);
        for(i=0;i<n;i++)
            scanf("%llu",&vec[i]);
        sort(vec.begin(),vec.end());
        for(i=0;i<vec.size();i++){
            for(j=i+1;j<vec.size();j++){
                if(!(vec[j]%vec[i]))
                    break;
            }
            if(j==vec.size())
                res*=vec[i];
        }
        printf("Case %d: %llu\n",c,res);
        c++;
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main(void){
    int i,j,n,t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        vector<int>primeFac(1000),x;
        for(i=0;i<a;i++){
            cin>>n;
            while(!(n%2)){
                n/=2;
                primeFac[2]++;
            }
            if(primeFac[2])
                x.push_back(2);   
            for(i=3;i<=sqrt(n);i+=2){
                if(!(n%i)){
                    while(!(n%i)){
                        n/=i;
                        primeFac[i]++;
                    }
                    x.push_back(i);
                }
            }
            if(n>1){
                primeFac[n]++;
                x.push_back(n);
            }
        }
        vector<int>X(0000);
        for(i=0;i<x.size();i++){
            for(j=0;primeFac[x[i]];i++){
                int i,j,x,y,length=a.length(),length1=b.length();
                vector<int>X(length+length1);
                for(i=length-1,x=0;i>=0;i--,x++){
                    int num=a[i]-'0';
                    int carry=0;
                for(j=length1-1,y=0;j>=0;j--,y++){
                    int num1=b[j]-'0',sum=num1*num+X[x+y]+carry;
                    X[x+y]=sum%10;
                    carry=sum/10;
                }
                if(carry)
                    X[x+y]+=carry;
                }
                i=X.size()-1;
                while(i>=0&&X[i]==0)
                    i--;
                if(i<0)
                    cout<<0;
                else{
                    string str="";
                while(i>=0)
                    str+=std::to_string(X[i--]);
                cout<<str<<"\n";
                }
            }
        }
    }
    return 0;
}*/