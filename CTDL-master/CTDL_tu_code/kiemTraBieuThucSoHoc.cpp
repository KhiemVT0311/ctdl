#include<bits/stdc++.h>
using namespace std;
int t;
string hehe(string a){
	stack<char> s;
	for(int i=0;i<a.length();i++){
		if(a[i]!=')') s.push(a[i]);
		else{
			char top=s.top();
			s.pop();
			bool check=true;
			while(top!='('){
				if(top=='+'||top=='-'||top=='*'||top=='/'){
					check=false;
				}
				top=s.top();
				s.pop();
			}
			if(check==true){
				return"Yes";
			}
		}
	}
	return "No";
}
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
		cout<<hehe(a)<<endl;
	}
	return 0;
}
