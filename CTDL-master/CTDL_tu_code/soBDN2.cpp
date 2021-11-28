#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int a;cin>>a;
		queue<unsigned long long> ss;
		if(a==0||a==1){
			cout<<a<<endl;
			continue;
		}
		ss.push(1);
		while(!ss.empty()){
			unsigned long long tmp=ss.front();
			if(tmp%a==0){
				cout<<tmp<<endl;
				break;
			}
			ss.push(tmp*10);
			ss.push(tmp*10+1);
			ss.pop();
		}
	}
	return 0;
}
