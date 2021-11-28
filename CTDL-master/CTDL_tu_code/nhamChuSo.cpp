#include<bits/stdc++.h>
using namespace std;
int min(string a,string b){
	for(int i=0;i<a.length();i++){
		if(a[i]=='6')a[i]='5';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6')b[i]='5';
	}
	return stoi(a)+stoi(b);
}
int max(string a,string b){
	for(int i=0;i<a.length();i++){
		if(a[i]=='5')a[i]='6';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='5')b[i]='6';
	}
	return stoi(a)+stoi(b);
}
int main(){
	int a,b;cin>>a>>b;
	string a1=to_string(a);
	string b1=to_string(b);
	cout<<min(a1,b1)<<" "<<max(a1,b1)<<endl;
	return 0;
}
