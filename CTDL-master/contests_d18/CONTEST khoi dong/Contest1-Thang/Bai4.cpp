#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

void xuLy(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(nt(i)&&n%i==0) {
			int dem=0;
			while(n%i==0){
				dem++;
				n=n/i;
			}
			cout<<i<<"("<<dem<<")"<<" ";
		}
	}
	if(nt(n)&&n!=1) cout<<n<<"(1)"<<" ";
	cout<<endl;
}

int main(){
	int t,dem=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<"Test "<<dem<<": ";
		xuLy(n);
		dem++;
	}
	return 0;
}
