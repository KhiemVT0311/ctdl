#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> a;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			a[tmp]=i;
		}
		int tmp=a[0];
		if(tmp!=0) cout<<tmp+1;
		else cout<<0;
		cout<<endl;
	}
	return 0;
}
