#include<bits/stdc++.h>
using namespace std;
int t,a[1005],n,k;
void Try(){
	bool check=false;
	for(int i=k-1;i>=0;i--){
		if(a[i]==n) n--;
		else {
			a[i]++;
			for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
			return;
		}
	}
	if(check==false)
		for(int i=0;i<k;i++) a[i]=i+1;
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
