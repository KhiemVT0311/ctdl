#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,min=INT_MAX,max=-1;cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++) {
			int tmp;cin>>tmp;
			if(tmp>max) max=tmp;
			if(tmp<min) min=tmp;
			mp[tmp]=i+1;
		}
		int length=mp.size();
		cout<<max-min+1-length<<endl;
	}
	return 0;
}
