#include<bits/stdc++.h>
using namespace std;
int t,n;
void gray(int i){
	int a[n]={0},count=n-1;
	while(i){
		a[count--]=i%2;
		i/=2;
	}
	for(int i=0;i<n;i++) cout<<a[i];
	cout<<" ";
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<pow(2,n);i++){
			gray(i);
		}
		cout<<endl;
	}
	return 0;
}
