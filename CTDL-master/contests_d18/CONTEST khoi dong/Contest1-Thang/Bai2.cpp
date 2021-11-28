#include<bits/stdc++.h>
using namespace std;

bool xuLy(int a){
	int x=a%10;
	int t;
	while(a){
		t=a%10;
		a=a/10;
	}
	if(x==t) return true;
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		if(xuLy(a)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
