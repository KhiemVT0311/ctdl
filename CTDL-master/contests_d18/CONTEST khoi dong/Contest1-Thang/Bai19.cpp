#include<bits/stdc++.h>
using namespace std;
 
int uoc(int n){
	int dem=0; 
	for (int i=2;i<sqrt(n);i++){
		if(n%i==0){
			if(i%2==0) dem++;
			if((n/i)%2==0) dem++;
		}
	} 
	if(n/(int)sqrt(n)==sqrt(n) && (int)sqrt(n)%2==0) dem++;
	if(n%2==0) dem++;
	return dem;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<uoc(n)<<endl;
	}
	return 0;
}
