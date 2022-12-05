#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m,k,p,cnt=0,a[2010]={},b[2010]={};
int find_value()
{
    for(int i=1;i<=m;i++)
    {
        if(b[i]<k)
        {
            b[i]++;
            return i;
        }
    }
    return 0;
}

void solve(){
    cin >> n >> m;
    k = n/m;
    p = n%m;
    for(int i=1; i<= n; i++)
    {
        cin >> a[i];
        if(a[i]<=m)
            b[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>m||b[a[i]]>k)
        {
            int ggg=find_value();
            if(ggg)
            {
                if(a[i]<=m&&b[a[i]]>k)
                    b[a[i]]--;
                cnt++;
                a[i]=ggg;
            }
        }
    }
    cout << k << " " << cnt << '\n';
    for(int i=1;i<=n;i++)
        cout << a[i] << ' ';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}