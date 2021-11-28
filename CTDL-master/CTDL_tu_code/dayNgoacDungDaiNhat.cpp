#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		string s1;
		getline(cin,s1);
		int len=s1.length();
		if(len==0){
			cout<<1<<endl;
			continue;
		}
		int maxx=0;
		stack<int> s;
		s.push(-1);
		for(int i=0;i<len;i++){
			if(s1[i]=='(') s.push(i);
			else {
				if(!s.empty()) s.pop();
				if(!s.empty()){
					maxx=max(maxx,i-s.top());
				}
				else s.push(i);
			}
		}
		cout<<maxx<<endl;
	}
	return 0;
}
