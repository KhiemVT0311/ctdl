#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		long long n,m;cin>>n>>m;
		long long min=INT_MAX,max=INT_MIN;
		for(int i=0;i<n;i++) {
			int tmp;cin>>tmp;
			if(tmp>max) max=tmp;
		}
		for(int i=0;i<m;i++) {
			int tmp;cin>>tmp;
			if(tmp<min) min=tmp;
		}
		cout<<min*max;
		cout<<endl;
	}
	return 0;
}
