#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
void Try(int i){
	for(int j=1;j<=n;j++){
		a[i]=j;
		if(i==n){
			for(int l=1;l<=n;l++){
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
		cin>>n;
		Try(1);
		cout<<endl;
	}
	return 0;
}


