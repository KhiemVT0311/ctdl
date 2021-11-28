#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
	while(b>0){
		int t=a%b;
		a=b;
		b=t;		
	}
	return a;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		long long x=(long long)a*b/GCD(a,b);
		cout<<GCD(a,b)<<" "<<x<<endl;
	}
	return 0;
}
