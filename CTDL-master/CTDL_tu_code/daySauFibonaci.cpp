#include<bits/stdc++.h>
using namespace std;
int t;
string fibo[94];
void f(){
	fibo[1]='A';
	fibo[2]='B';
	for(int i=3;i<30;i++){
		fibo[i]=fibo[i-2]+fibo[i-1];
	}
}
int main(){
	f();
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		cout<<fibo[n+1][k+1]<<endl;
	}
	return 0;
}
