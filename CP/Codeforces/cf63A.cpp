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
    int i,n,last;
    cin>>n;
    vector<int>first,sec,third;
    string ch[n],rank;
    for(i=0;i<n;i++)
    {
        cin>>ch[i]>>rank;
        if(rank[0]=='c'&&rank[1]=='a')
            last=i;
        else if(rank[0]=='r')
            first.push_back(i);
        else if(rank[0]=='m')
            third.push_back(i);
        else
            sec.push_back(i);
    }
    for(unsigned int i=0;i<first.size();i++)
        cout<<ch[first[i]]<<"\n";
    for(unsigned int i=0;i<sec.size();i++)
        cout<<ch[sec[i]]<<"\n";
    for(unsigned int i=0;i<third.size();i++)
        cout<<ch[third[i]]<<"\n";
    cout<<ch[last];
    return 0;
}
