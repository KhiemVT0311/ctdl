#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		queue<unsigned long long> dq;
		int n;cin>>n;
		if(n==0) continue;
		if(n==1) {
			cout<<1<<endl;
			continue;
		}
		dq.push(1);
		while(n){
			unsigned long long tmp=dq.front();
			cout<<tmp<<" ";
			dq.push(tmp*10);
			dq.push(tmp*10+1);
			dq.pop();
			n--;
		}
		cout<<endl;
	}
	return 0;
}
