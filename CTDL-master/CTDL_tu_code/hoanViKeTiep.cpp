#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int dau=-1,cuoi=-1;
		for(int i=n-1;i>0;i--){
			for(int j=i-1;j>=0;j--){
				if(a[j]<a[i]){
					cuoi=i;
					dau=j;
					i=0;
					break;
				}
			}
		}
		if(dau==-1){
			for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
			cout<<endl;
			continue;
		}
		int tmp=a[cuoi];
		while(cuoi>dau){
			a[cuoi]=a[cuoi-1];
			cuoi--;
		}
		a[cuoi]=tmp;
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}


