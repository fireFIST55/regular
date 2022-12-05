#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int arr[2]  = {4,7};
		string res = "";
		
		void permutacion(int n, string s, long long int goal){
			int suma =0;
		
			if(s.size()%2==0 && s.size()!=0){
				int tam = s.size()/2,sum=0;
				suma+= (4*tam)+(7*tam);
				for(int i=0; i<s.size(); i++){
					//sum+= (int)s[i] - '0';
					int x = s[i]- '0';
					sum +=x;
				}
				if(sum == suma){
					if(stoll(s)>=goal){
	
						if(res=="") res = s;
						else if(stoll(s)<stoll(res)) res = s;
						
					}
				}
			}	
			
			if(n>0){
				for(int i=0; i<2; i++){
					permutacion(n-1, s+to_string(arr[i]), goal);
				}
			}
			
		}
		
		int main(){
			long long int goal;cin>>goal;
			permutacion(10,"",goal);
			cout<<res;
		}
