#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;
bool r,g,b;
char a[101][101];
bool hang(){
	if(n%3) return 0;
	char c=a[1][1];
	for(int i=1;i<=n/3;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=c) return 0;
		}
	}
	c=a[n/3+1][1];
	for(int i=n/3+1;i<=n/3*2;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=c) return 0;
		}
	}
	c=a[n/3*2+1][1];
	for(int i=n/3*2+1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]!=c) return 0;
		}
	}
	return 1;
}
bool lie(){
	if(m%3) return 0;
	char c=a[1][1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m/3;j++){
			if(a[i][j]!=c) return 0;
		}
	}
	c=a[1][m/3+1];
	for(int i=1;i<=n;i++){
		for(int j=m/3+1;j<=m/3*2;j++){
			if(a[i][j]!=c) return 0;
		}
	}
	c=a[1][m/3*2+1];
	for(int i=1;i<=n;i++){
		for(int j=m/3*2+1;j<=m;j++){
			if(a[i][j]!=c) return 0;
		}
	}
	return 1;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    cin>>n>>m;
	if(n%3&&m%3){
		cout<<"NO";
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];	
			if(a[i][j]=='R') r=1;
			else if(a[i][j]=='G') g=1;
			else if(a[i][j]=='B') b=1;
		}
	}
	if(!r||!g||!b){
		cout<<"NO";
		return 0;
	}
	if(hang()){
		cout<<"YES";
		return 0;
	}
	if(lie()){
		cout<<"YES";
		return 0;
	}
	cout<<"NO"; 
    
    return 0;
}