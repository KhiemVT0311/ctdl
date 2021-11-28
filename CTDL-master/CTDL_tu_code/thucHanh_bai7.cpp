#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		int arrayMinSum=0;
		int k1=min(k,n-k);
		for(int i=0;i<k1;i++) arrayMinSum+=a[i];
		int arrayMaxSum=0;
		for(int i=k1;i<n;i++) arrayMaxSum+=a[i];
		cout<<arrayMaxSum-arrayMinSum<<endl;
	}
	return 0;
}
