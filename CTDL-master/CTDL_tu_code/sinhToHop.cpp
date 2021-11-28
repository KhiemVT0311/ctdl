#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[100];
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			for(int l=1;l<=k;l++){
				cout<<a[l];
			}
			cout<<" ";
		}
		else Try(i+1);
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}
	return 0;
}


