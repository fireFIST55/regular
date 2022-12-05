#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int i,j,k,n;
    char sign[5]="^>v<";
    string str;
    getline(cin,str);
    cin>>n;
    for(i=0;i<5;i++)
    {
        if(str[0]==sign[i])
            break;
    }
    for(i+=1,j=1;i<=4;i++,j++)
    {
        if(i==4)
            i=0;
        if(str[2]==sign[i])
        {
            if(j==2||str[2]==str[0]||((j<n&&!((n-j)%4)))&&((4-j)<n&&!((n-(4-j))%4)))
                cout<<"undefined";
            else if((j==n)||(j<n&&!((n-j)%4)))
                cout<<"cw";
            else if((n==(4-j))||((4-j)<n&&!+((n-(4-j))%4)))
                cout<<"ccw";
            break;
        }
    }
    cout<<"\n";
    return 0;
}
