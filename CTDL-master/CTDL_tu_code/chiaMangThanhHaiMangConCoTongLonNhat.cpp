#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int min=k<n-k?k:n-k;
		int result=0;
		for(int i=0;i<min;i++){
			result-=a[i];
		}
		for(int i=min;i<n;i++){
			result+=a[i];
		}
		cout<<result<<endl;
	}
	
	return 0;
}
