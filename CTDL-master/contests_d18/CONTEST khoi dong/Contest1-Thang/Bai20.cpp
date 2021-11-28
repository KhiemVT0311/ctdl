#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++) cin>>a[i];
}

bool xuLy(int a[],int b[],int n){
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i]>b[i]) return false;
	}
	return true;
}

int main(){
	int a[100],b[100],n;
	cin>>n;
	nhap(a,n);
	nhap(b,n);
	if(xuLy(a,b,n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
