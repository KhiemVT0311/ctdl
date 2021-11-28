#include<bits/stdc++.h>
using namespace std;

long long fi(int n){
	long long fn,f1=1,f2=1;
	if(n==1||n==2) return 1;
	for(int i=3;i<=n;i++){
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	return fn;
}

void in(long long a[15][15],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void xuLy(long long a[15][15],int n){
	int gt=1,hang=n-1,cot=n-1,d=0;
	while(gt<=n*n){
		for(int i=d;i<=cot;i++){
			a[d][i]=fi(gt);
			gt++;
		} 
		for(int i=d+1;i<=hang;i++){
			a[i][cot]=fi(gt);
			gt++;
		} 
		for(int i=cot-1;i>=d;i--){
			a[hang][i]=fi(gt);
			gt++;
		} 
		for(int i=hang-1;i>d;i--){
			a[i][d]=fi(gt);
			gt++;
		} 
		d++;
		hang--;
		cot--;
	}
}

int main(){
	int t,dem=1;
	cin>>t;
	while(t--){
		long long a[15][15];
		int n;
		cin>>n;
		cout<<"Test "<<dem<<":"<<endl;
		xuLy(a,n);
		in(a,n);
		dem++;
	}
}
