#include<bits/stdc++.h>
using namespace std;
int main(void){
    char str[40]="MostakMahmudChowdhury",str1[30]="iHam898";
    int i=1,k=7,x=2;
    for(int i=0;i<1;i++)
        cout<<str[i]<<endl;
    strncpy(str+x+i,str1,k);
    cout<<str<<endl;
    return 0;
}