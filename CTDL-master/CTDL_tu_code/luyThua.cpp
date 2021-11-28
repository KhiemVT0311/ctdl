#include<bits/stdc++.h>
using namespace std;
int t;
int m=1e9+7;
long long luyThua(long long n,long long k){
	if(k==1) return n;
	if(k%2==0) return luyThua((n*n)%m,k/2)%m;
	return (n*luyThua((n*n)%m,k/2)%m)%m;
}
int main(){
	cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		cout<<luyThua(n,k);
		cout<<endl;
	}
	return 0;
}
