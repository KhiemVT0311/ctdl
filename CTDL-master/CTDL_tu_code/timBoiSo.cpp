#include<iostream>
#include<queue>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		queue<long long> a;
		a.push(9);
		while(!a.empty()){
			long long tmp=a.front();
			if(tmp%x==0){
				cout<<tmp<<endl;
				break;
			}
			a.pop();
			a.push(tmp*10);
			a.push(tmp*10+9);
		}
	}
	return 0;
}
