#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[105];
void sinh(int i){
	for(int j=a[i-1]+1;j<=n-m+i;j++){
		a[i]=j;
		if(i==m){
			for(int k=1;k<=m;k++){
				cout<<a[k];
			}
			cout<<" ";
		}
		else sinh(i+1);
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		sinh(1);
		cout<<endl;
	}
	return 0;
}
