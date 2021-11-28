#include<bits/stdc++.h>
using namespace std;
int t,a[1005],n,k;
void Try(){
	bool check=false;
	int tmp=n,count=0;
	for(int i=k-1;i>0;i--){
		if(a[i]==(a[i-1]+1)) continue;
		else {
			a[i]--;
			for(int j=k-1;j>i;j--){
				a[j]=tmp--;
			}
			return;
		}
	}
	if(check==false &&a[0]!=1){
		a[0]--;
		for(int i=k-1;i>0;i--){
			a[i]=n--;
		}
		return;
	}
	if(check==false&&a[0]==1)
		for(int i=n-k+1;i<=n;i++) a[count++]=i;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<k;i++) cin>>a[i];
		Try();
		for(int i=0;i<k;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
