#include<bits/stdc++.h>
using namespace std;
int t;
string f[51];
void F(){
	f[1]=1;
	for(int i=2;i<51;i++)
		f[i]=f[i-1]+(char)(i+'0')+f[i-1];
}
int main(){
	cin>>t;
	while(t--){
		int a,k;cin>>a>>k;
		F();
		cout<<f[a]<<endl;
	}
	return 0;
}
