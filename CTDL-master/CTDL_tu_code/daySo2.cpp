#include<bits/stdc++.h>
using namespace std;
int t;
string result="";
void print(int a[],int n){
	string tmp="";
	tmp+="["+to_string(a[0]);
	for(int i=1;i<n;i++)
		tmp+=" "+to_string(a[i]);
	tmp+="] ";
	result=tmp+result;
}
void Try(int a[],int n){
	print(a,n);
	if(n==1) return;
	for(int i=0;i<n-1;i++) a[i]+=a[i+1];
	Try(a,n-1);
}
int main(){
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		Try(a,n);
		cout<<result<<endl;
		result="";
	}
	return 0;
}
