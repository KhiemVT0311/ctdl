#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<long long> a;
//		for(int i=1;i<10;i++) a.push(i);
//		while(!a.empty()){
//			cout<<a.front()<<" ";
//			a.pop();
//		}
		a.push(9);
		while(!a.empty()){
			long long tmp=a.front();
			if(tmp%n==0){
				cout<<tmp<<endl;
				break;
			}
			a.push(tmp*10);
			a.push(tmp*10+9);
			a.pop();
		}
	}
	return 0;
}
