#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char str1[15],str2[15],str3[15],str4[15];
    int i,n;
    cin>>str1>>str2>>n;
    cout<<str1<<" "<<str2<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>str3>>str4;
        if(!(strcmp(str1,str3)))
        {
            cout<<str2<<" ";
            strcpy(str1,str2);
        }
        else
            cout<<str1<<" ";
        cout<<str4<<"\n";
        strcpy(str2,str4);
    }
    return 0;
}
