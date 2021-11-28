#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
		int a[n],b[m];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		if(n<m) swap(n,m);
		int i=0,j=0,index=0;
		while(index<k){
			if(a[i]>b[j]){
				j++;
				index++;
				if(index==k-1){
					cout<<a[i]<<endl;
					break;
				}
			}
			else {
				i++;
				index++;
				if(index==k-1){
					cout<<b[j]<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
