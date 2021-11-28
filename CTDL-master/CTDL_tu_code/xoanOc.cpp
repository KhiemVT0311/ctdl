#include<bits/stdc++.h>
using namespace std;
void xoanOc(int a[100][100],int n,int m){
	int dong=n,cot=m,k=1,p=0;
	while(k<=n*m){
		for(int i = p;i<cot;i++) a[p][i]=k++;
		for(int i=p+1;i<dong;i++) a[i][cot-1]=k++;
		for(int i=cot-2;i>=p;i--) a[dong-1][i]=k++;
		for(int i = dong -2;i>p;i--) a[i][p]=k++;
		p++;dong--;cot--;
	}
}
void nhapMang(int a[100][100],int n,int m){
	for( int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
void xuatMang(int a[100][100],int n,int m){
	for( int i = 0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[100][100];
		nhapMang(a,n,m);
		xoanOc(a,n,m);
		xuatMang(a,n,m);
	} 
	return 0;
}

