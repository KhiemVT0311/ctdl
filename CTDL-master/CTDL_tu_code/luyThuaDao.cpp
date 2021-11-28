#include<bits/stdc++.h>
using namespace std;
int t;
const int m=1e9+7;
long long ngichDao(long long n){
	long long r=0;
	while(n){
		r=r*10+n%10;
		n/=10;
	}
	return r;
}
long long luyThua(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n;
	if(k%2==0) return luyThua((n*n)%m,k/2)%m;
	return (n*luyThua((n*n)%m,k/2)%m)%m;
}
long long poww(long long n, long long k)
{
    if( k == 0) 
    return 1; 
    long long temp = poww(n, k/2); 
    temp=temp*temp%m;
    if (k%2 == 0) 
        return temp;
    return temp*n%m;
}
int main(){
	cin>>t;
	while(t--){
		long long n;
		n=rand()%ULLONG_MAX;
//		cout<<n<<endl;
//		cin>>n;
		long long r=ngichDao(n);
//		cout<<luyThua(n,r)<<endl;
//		cout<<poww(n,r)<<endl;
		long long result1=luyThua(n,r),result2=poww(n,r);
		if(result1!=result2){
			cout<<n<<endl<<result1<<" + "<<result2<<endl;
		}
	}
	return 0;
}
