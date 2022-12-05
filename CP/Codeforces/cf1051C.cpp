#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int n, cnt = 0;
	cin >> n;
 
	vector<int> vec(n);
	map<int, int> mp, used;
 
	for(int i = 0; i < n; i++)
	{
		cin >> vec[i];
 
		mp[vec[i]]++;
	}
 
	for(int i = 0; i < n; i++)
	{
		if(mp[vec[i]] == 1)
		{
			cnt++;
		}
	}
 
	if(cnt % 2 == 0)
	{
		cout << "YES" << '\n';
		
		bool flag = true;
 
		for(int i = 0; i < n; i++)
		{
			if(mp[vec[i]] == 1)
			{
				if(flag)
				{
					cout << "A";
				}
				else
				{
					cout << "B";
				}
 
				flag = !flag;
			}
			else
			{
				cout << "A";
			}
		}
 
		cout << '\n';
		return;
	}
 
	int x = -1;
	for(int i = 0; i < n; i++)
	{
		if(mp[vec[i]] >= 3)
		{
			x = i;
		}
	}
 
	if(x == -1)
	{
		cout << "NO" << '\n';
		return;
	}
 
	bool flag = true, f = true;
 
	cout << "YES" << '\n';
 
	for(int i = 0; i < n; i++)
	{
		if(mp[vec[i]] == 1)
		{
			if(flag)
			{
				cout << "A";
			}
			else
			{
				cout << "B";
			}
 
			flag = !flag;
		}
		else if(i == x and f)
		{
			cout << "B";
			f = false;
		}
		else
		{
			cout << "A";
		}
	}
 
	cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while(t--)
        solve();
    
    return 0;
}