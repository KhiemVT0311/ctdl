#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		long long result=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		for(int i=1;i<n;i++){
			result=(result+(a[i]*i)%m)%m;
		}
		cout<<result<<endl;
	}
	return 0;
}
