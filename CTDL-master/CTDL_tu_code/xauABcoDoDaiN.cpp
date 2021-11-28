#include<bits/stdc++.h>
using namespace std;
int t;
void display(int a[],int n){
	for(int i=0;i<n;i++)
		a[i]==0?cout<<'A':cout<<'B';
	cout<<" ";
}
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n]={0};
//		memset(a,0,n);
		display(a,n);
		for(int i=1;i<pow(2,n);i++){
			int length=n-1;
			while(length>=0&&a[length]!=0){
				a[length]=0;
				length--;
			}
			if(length>=0) a[length]=1;
			display(a,n);
		}
		cout<<endl;
	}
	return 0;
}


