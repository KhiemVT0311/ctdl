#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

int main(){
	int t,dem=1;
	cin>>t;
	while(t--){
		int a[100],b[100],n,m,p;
		cin>>n>>m>>p;
		nhap(a,n);
		nhap(b,m);
		cout<<"Test "<<dem<<":"<<endl;
		for(int i=0;i<p;i++){
			cout<<a[i]<<" ";
		}
		for(int i=0;i<m;i++){
			cout<<b[i]<<" ";
		}
		for(int i=p;i<n;i++){
			cout<<a[i]<<" ";
		}
		dem++;
		cout<<endl;
	}
}
