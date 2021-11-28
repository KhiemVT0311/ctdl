#include<bits/stdc++.h>
using namespace std;
int main(){
	string a[205];
	int top=0;
	while(true){
		string s1;cin>>s1;
		if(s1=="show"){
			for(int i=0;i<top;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else if(s1=="push"){
			string tmp;cin>>tmp;
			a[top++]=tmp;
		}
		else if(s1=="pop") top--;
		if(top==0) {
			cout<<"empty"<<endl;
			break;
		}
	}
	return 0;
}
