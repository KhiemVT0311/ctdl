#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			mp[tmp]++;
		}
		int tmp=mp[k];
		if(tmp==0) cout<<-1<<endl;
		else cout<<tmp<<endl;
	}
	return 0;
}
