#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string a;cin>>a;
		stack<char> s;
		int count=0;
		for(int i=0;i<a.length();i++){
			if(a[i]!=')') s.push(a[i]);
			else{
				if(!s.empty())s.pop();
				else {
					count++;
					s.push('(');
				}
			}
		}
		count+=s.size()/2;
		cout<<count<<endl;
	}
	return 0;
}
