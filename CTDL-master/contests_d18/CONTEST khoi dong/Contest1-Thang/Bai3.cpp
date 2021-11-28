#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

bool kiemTra(int a[],int n){
	int c=0,d=n-1;
	while(c<d){
		if(a[c]!=a[d]) return false;
		c++;d--;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100],n;
		nhap(a,n);
		if(kiemTra(a,n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
