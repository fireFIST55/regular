#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n;
    cin>>n;
    int x,sum=0,count=0,increase=0,decrease=0,array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        sum+=array[i];
        array[i]=5-array[i];
        if(i&&array[i-1]>array[i])
            increase=0;
        else if(i&&array[i-1]<array[i])
            decrease=0;
    }
    if(4.5*n<sum)
        cout<<count<<"\n";
    else
    {
        x=4.5*n-sum;
        if(x+sum!=4.5*n)
            x+=1;
        if(decrease)
        {
            i=n-1;
            while(x>0)
            {
                x-=array[i];
                count++;
                i-=1;
            }
        }
        else
        {
            if(!increase)
                sort(array,array+n,greater<int>());
            i=0;
            while(x>0)
            {
                x-=array[i];
                count++;
                i+=1;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
