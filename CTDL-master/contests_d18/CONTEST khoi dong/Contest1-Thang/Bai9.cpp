#include<bits/stdc++.h>
using namespace std;

bool ktTang(string s){
	for(int i=0;i<s.length()-1;i++){
		if(s[i]>s[i+1]) return false;
	}
	return true;
} 

bool ktGiam(string s){
	for(int i=0;i<s.length()-1;i++){
		if(s[i]<s[i+1]) return false;
	}
	return true;
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(ktTang(s)||ktGiam(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}


