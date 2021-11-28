#include<bits/stdc++.h>
using namespace std;
 
bool ktcp(long long s){
	long long a=sqrt(s);
	if(a*a==s) return true;
	else return false;
}
 
int main(){ 
	int t=50;
	while(t--)
	{
		long long a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	long long s=a*b+c*d+e*f;
	if(ktcp(s)){
		long long y=sqrt(s);
		if(a>b) swap(a,b);
		if(c>d) swap(c,d);
		if(e>f) swap(e,f);
		if(b==y&&d==y&&f==y) cout<<"YES"<<endl;
		else{
			if(d>b){
				swap(d,b);
				swap(c,a);
			}
			if(f>b){
				swap(f,b);
				swap(e,a);
			}
			if(y==b){
				if(y==c+f||y==d+e||y==c+e||y==d+f) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
			}
			else cout<<"NO"<<endl;
		}
		
	}
	else cout<<"NO"<<endl;
	}	
	return 0;
}
