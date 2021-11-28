#include<bits/stdc++.h>
using namespace std;

void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}

void in(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void xuLy(int a[100][100],int m,int n){
	int b[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			b[i][j]=a[j][i];
		}
	}
	int c[100][100]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	in(c,m,m);
}

int main(){
	int t,dem=1;
	cin>>t;
	while(t--){
		int a[100][100];
		int m,n;
		cin>>m>>n;
		nhap(a,m,n);
		cout<<"Test "<<dem<<":"<<endl;
		xuLy(a,m,n);
		dem++;
	}
	return 0;
}
