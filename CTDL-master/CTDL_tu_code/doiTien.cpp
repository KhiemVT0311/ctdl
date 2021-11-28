#include<bits/stdc++.h>
using namespace std;
int s[]={1,2,5,10,20,50,100,200,500,1000};
int main(){
	int t;cin>>t;
	while(t--){
		int n,dem=0;
		cin>>n;
		for(int i=9;i>=0;i--){
			dem+=n/s[i];
			n%=s[i];
		}
		cout<<dem<<endl;
	}
	return 0;
}
