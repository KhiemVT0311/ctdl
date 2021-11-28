#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
void Try(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i==n){
			for(int k=1;k<=n;k++){
				a[k]==0?cout<<'A':cout<<'B';
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


