#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,k,n,num,freq1[6202]={0},total=0;
    cin>>n;
    char string[1050];
    for(i=0;i<n;i++)
    {
        cin>>string;
        int freq[26]={0};
        for(j=0,k=0,num=0;string[j]!='\0'&&k<26;j++)
        {
            if(!freq[string[j]-97])
            {
                k+=1;
                freq[string[j]-97]++;
                num+=(string[j]-96)*(string[j]-96);
            }
        }
        if(!freq1[num])
        {
            freq1[num]++;
            total++;
        }
    }
    cout<<total<<"\n";
    return 0;
}
