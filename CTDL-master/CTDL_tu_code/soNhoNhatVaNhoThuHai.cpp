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
		int n;cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++) {
			int tmp;cin>>tmp;
			mp[tmp]=i+1;
		}
		int dem=0,length=mp.size();
		str a[length];
		for(auto i:mp){
			a[dem].value=i.first;
			a[dem++].count=i.second;
		}
		sort(a,a+dem,check);
		if(dem>1) cout<<a[0].value<<" "<<a[1].value<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
