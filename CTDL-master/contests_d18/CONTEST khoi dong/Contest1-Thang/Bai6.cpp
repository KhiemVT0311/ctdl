#include<bits/stdc++.h>
using namespace std;

void xuLy(int a[25][25],int n){
	int gt=n*n;
	int d=0,cot=n-1,hang=n-1;
	while(gt!=0){
		for(int i=d;i<=cot;i++) a[d][i]=gt--;
		for(int i=d+1;i<=hang;i++) a[i][cot]=gt--;
		for(int i=cot-1;i>=d;i--) a[hang][i]=gt--;
		for(int i=hang-1;i>d;i--) a[i][d]=gt--;
		d++;
		cot--;
		hang--;
	}
}

void in(int a[25][25],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int t,dem=1;
	cin>>t;
	while(t--){
		
		int a[25][25],n;
		cin>>n;
		cout<<"Test "<<dem<<":"<<endl;
		xuLy(a,n);
		in(a,n);
		dem++;
	}
	return 0;
}
