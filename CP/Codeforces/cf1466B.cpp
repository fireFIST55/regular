#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,count=1,x,y=1;
        scanf("%d",&n);
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
             if(!i)
                x=vec[i];
            else if(x<=vec[i]){
                count+=1;
                if(x==vec[i])
                    x=vec[i]+1;
                else
                    x=vec[i];
            }
        }
        printf("%d\n",count);
    }
    return 0;
}