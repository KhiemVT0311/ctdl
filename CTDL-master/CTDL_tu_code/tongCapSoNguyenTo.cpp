#include<bits/stdc++.h>
using namespace std;
int t;
bool isprime(int n){
	if(n<2) return false;
	if(n<4) return true;
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0||n%(i+2)==0)
			return false;
	return true;
}
int main(){
	cin>>t;
	while(t--){
		int n,k;cin>>n;
		if(n<4){
			cout<<-1<<endl;
			continue;
		}
		else if(n==4){
			cout<<"2 2"<<endl;
			continue;
		}
		else{
			int check=0;
			if(n%2==1){
				if(isprime(n-2)){
					cout<<"2 "<<n-2<<endl;
					continue;
				}
			}
			else{
				for(int i=3;i<=n/2;i+=2){
					if(isprime(i)&&isprime(n-i)){
						check=1;
						cout<<i<<" "<<n-i<<endl;
						break;
					}
				}
			}
			if(check==0) cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}
