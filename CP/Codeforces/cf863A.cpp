#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,length,yes=1;
    char string[15];
    cin>>string;
    j=strlen(string)-1;
    while(string[j]=='0')
        j--;
    string[j+1]='\0';
    length=strlen(string);
    for(i=0,j=length-1;i<j;i++,j--)
    {
        if(string[i]!=string[j])
        {
            yes=0;
            break;
        }
    }
    if(yes)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<"\n";
    return 0;
}
