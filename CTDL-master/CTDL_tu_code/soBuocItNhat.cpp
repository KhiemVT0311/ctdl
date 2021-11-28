#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],d[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			d[i]=1;
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>=a[j])
					d[i]=max(d[i],d[j]+1);
			}
		}
//		for(int i=0;i<n;i++){
//			cout<<d[i]<<" ";
//		}
//		cout<<endl;
		cout<<n-*max_element(d,d+n)<<endl;
	}
	return 0;
}
