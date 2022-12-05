#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,x,n;
    cin>>n;
    int people[n],min,total=0;
    for(i=0;i<n;i++)
        cin>>people[i];
    for(i=0;i<n;i++)
    {
        for(j=0,total=0;j<people[i];j++)
        {
            cin>>x;
            total+=x*5+15;
        }
        if(!i||min>total)
            min=total;
    }
    cout<<min<<"\n";
    return 0;
}
