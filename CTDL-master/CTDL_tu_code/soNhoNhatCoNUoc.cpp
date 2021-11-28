#include<bits/stdc++.h>
using namespace std;
int soUoc(int n){
	int dem=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(i==n/i) dem+=1;
			else dem+=2; 
		}
	}
	return dem;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> a;
		for(int i=1;i<=n;i++){
			int tmp=soUoc(i);
			cout<<i<<" "<<tmp<<endl;
//			if(a[tmp]==0) a[tmp]=i;
		}
//		for(auto i:a){
//			cout<<i.second<<" "<<i.first<<endl;
//		}
	}
}
