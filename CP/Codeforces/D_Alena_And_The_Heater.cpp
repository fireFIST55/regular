#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
	     cin>>n;
	     int a[n];
	     for(int i=0;i<n;i++)
	     {
	     	cin>>a[i];
	     }
	     string s;
	     cin>>s;
	     int l=-1000000000;
	     int r=1e9;
	     for(int j=4;j<n;j++)
	     {
	     	if(s[j]!=s[j-1])
	     	{
	     		if(s[j]=='1')
	     		{
	     			for(int k=j;k>=(j-4);k--)
	     			{
	     				l=max(l,a[k]);
	     			}
	     		}
	     		else
	     		{
	     			for(int k=j;k>=(j-4);k--)
	     			{
	     				r=min(r,a[k]);
	     			}
	     		}
	     	}
	     }
	     l++;
	     r--;
	     if(l<=r)
	     {
	     	cout<<l<<" "<<r<<endl;
	     }
	     else
	     {
	     	cout<<l<<" "<<l+1<<endl;
	     }
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