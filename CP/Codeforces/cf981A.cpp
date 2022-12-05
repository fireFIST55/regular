#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    encoding_898;
    string str;
    cin>>str;
    int i,j,freq[26]={0},length=str.length(),palindrome=1;
    if(length>1)
    {
        i=length/2-1;
        if(length&1)
        {
            j=length/2+1;
            freq[str[j-1]-97]++;
        }
        else
            j=length/2;
        for(;i>=0&&j<length;i--,j++)
        {
            freq[str[i]-97]++;
            freq[str[j]-97]++;
            if(str[i]!=str[j])
            {
                palindrome=0;
                break;
            }
        }
    }
    if(length==1||freq[str[0]-97]==length)
        cout<<0;
    else if(palindrome)
        cout<<length-1;
    else
        cout<<length;
    return 0;
}
