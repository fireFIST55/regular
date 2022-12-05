#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,k,n,num,freq1[6202]={0},total=0;
    cin>>n;
    char string[n][1050];
    for(i=0;i<n;i++)
        cin>>string[i];
    sort(string,string+n);
    cout<<total<<"\n";
    return 0;
}
