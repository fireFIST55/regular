#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,k,no=0;
    cin>>k;
    char string[5];
    int freq[10]={0};
    for(i=0;i<4;i++)
    {
        cin>>string;
        if(!no)
        {
            for(j=0;j<4;j++)
            {
                if(string[j]>48&&string[j]<58)
                {
                    freq[string[j]-48]++;
                    if(freq[string[j]-48]>k*2)
                    {
                        no=1;
                        break;
                    }
                }
            }
        }
    }
    if(no)
        cout<<"NO";
    else
        cout<<"YES";
    cout<<"\n";
    return 0;
}
