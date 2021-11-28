#include<bits/stdc++.h>
using namespace std;
int t;
int hehe(int n){
	if(n==0) return 0;
	if(n<3) return n;
	if(n==4) return 1;
	int canN=sqrt(n);
	cout<<"can n="<<canN<<endl;
	return 1+hehe(n-canN*canN);
}
int main(){
	cin>>t;
	while(t--){
		int n;
//		cin>>n;
		n=rand()%999+1;
		cout<<"n="<<n<<endl;
		cout<<hehe(n)<<endl;
	}
	return 0;
}
