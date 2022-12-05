#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char string[52];
    scanf("%s",string);
    int i,j,k,l,ans=0,length=strlen(string),freq[26]={0};
    for(i=0;i<length;i++)
        freq[string[i]-97]++;
    if(freq[string[0]-97]==length)
        cout<<1;
    else
    {
        for(i=2;i<length;i++)
        {
            if(!(length%i))
            {
                for(k=0,j=i,ans=1;k<i&&j<length;k++,j++)
                {
                    if(string[k]!=string[j])
                    {
                        ans=0;
                        break;
                    }
                    if(k==i-1)
                        k=-1;
                }
                if(ans)
                    break;
            }
        }
        if(ans)
            cout<<i;
        else
            cout<<length;
    }
    cout<<"\n";
    return 0;
}
