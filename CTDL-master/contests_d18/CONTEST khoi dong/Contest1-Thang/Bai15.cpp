#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void xuLy(int a[],int n){
	int k=-1;
	bool check=true;
	for(int i=0;i<n-1;i++){
		if(check){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					k=i;
					check=false;
				}
			
			}
		}
		else break;
	}
	if(check) cout<<"NO"<<endl;
	else cout<<a[k]<<endl;	
}

int a[100005];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		nhap(a,n);
		xuLy(a,n);
	}
	return 0;
}
