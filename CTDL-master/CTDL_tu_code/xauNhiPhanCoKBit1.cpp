//#include<bits/stdc++.h>
//using namespace std;
//int t,n,k,a[100];
//bool check(int a[]){
//	if(k==count(a+1,a+n+1,1))return true;
//	return false;
//}
//void Try(int i){
//	for(int j=0;j<2;j++){
//		a[i]=j;
//		if(i==n){
//			if(check(a)){
//				for(int k=1;k<=n;k++){
//					cout<<a[k];
//				}
//				cout<<endl;
//			}
//		}
//		else Try(i+1);
//	}
//}
//int main(){
//	cin>>t;
//	while(t--){
//		cin>>n>>k;
//		Try(1);
//		cout<<endl;
//	}
//	return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
int t;
int check(unsigned long x,unsigned long n){
	char count=0;
	for(int i=0;i<n;i++){
		count+=(x>>i)&1;
	}
	return count;
}
void display(unsigned long x,unsigned long n){
	for(int i=0;i<n;i++) cout<<((x>>i)&1);
	cout<<endl;
}
int main(){
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(unsigned long i=0;i<1<<n;i++){
			if(check(i,n)==k) display(i,n);
		}
	}
	return 0;
}
