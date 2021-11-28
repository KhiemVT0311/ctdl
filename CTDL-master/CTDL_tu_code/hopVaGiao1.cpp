#include<bits/stdc++.h>
using namespace std;
int t;
typedef struct{
	int value;
	int count;
}str;
bool check(str a,str b){
	return a.value<b.value?true:false;
}
int main(){
	cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		map<int,int> mp;
		for(int i=0;i<n+m;i++){
			int tmp;cin>>tmp;
			mp[tmp]++;
		}
		int length=mp.size(),dem=0;
		str a[length];
		for(auto i:mp){
			a[dem].value=i.first;
			a[dem++].count=i.second;
		}
		sort(a,a+length,check);
		for(str i:a){
			cout<<i.value<<" ";
		}
		cout<<endl;
		for(str i:a){
			if(i.count>1) cout<<i.value<<" ";
		}
		cout<<endl;
	}
	return 0;
}
