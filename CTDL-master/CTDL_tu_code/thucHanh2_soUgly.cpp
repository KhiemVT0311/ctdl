#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull a[10005];
void ugly(){
	a[0]=1;
	int i2=0,i3=0,i5=0;
	for(int i=1;i<10005;i++){
		a[i]=min(a[i2]*2,min(a[i3]*3,a[i5]*5));
		if(a[i]==a[i2]*2) i2++;
		if(a[i]==a[i3]*3) i3++;
		if(a[i]==a[i5]*5) i5++;
	}
}
int main(){
	ugly();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<a[n-1]<<endl;
	}
	return 0;
}
