#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int a[100005];
	int top=0;
	while(t--){
		string s1;cin>>s1;
		if(s1=="PRINT"){
			if(top<=0){
				cout<<"NONE"<<endl;
			}
			else cout<<a[top-1]<<endl;
		}
		else if(s1=="PUSH"){
			int tmp;cin>>tmp;
			a[top++]=tmp;
		}
		else if(s1=="POP") {
			if(top>0) top--;
			else top=0;
		}
	}
	return 0;
}
