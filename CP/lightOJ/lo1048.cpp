#include<bits/stdc++.h>
using namespace std;
int main(void){
    int i,n=54;
    vector<int>vec,freq(10000000),vec1;
    vector<int>::iterator it;
    for(i=1;i<=n;i++){
        if(!(n%i)){
            freq[i]++;
            int x=n*i;
            if(!freq[x])
                vec.push_back(x);
            freq[x]++;
            x=i*i;
            if(!freq[x])
                vec.push_back(x);
            freq[x]++;
        }
    }
    sort(vec.begin(),vec.end());
    for(i=1;i<=n*n;i++){
        if(!((n*n)%i))
            vec1.push_back(i);
    }
    for(i=0;i<vec.size();i++){
        int x=vec[i];
        it=find(vec1.begin(),vec1.end(),x);
        if(it==vec1.end())
            cout<<vec[i]<<" ";
    }
    cout<<"\n";
    return 0;
}