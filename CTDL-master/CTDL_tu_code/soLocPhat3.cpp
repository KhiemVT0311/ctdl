#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[100005],count=0;
		queue<long long> q;
		q.push(6);q.push(8);
		while(1){
			long long tmp=q.front();
			long long str=tmp*10+6;
			if(str>pow(10,n)) break;
			a[count++]=tmp;
			q.push(tmp*10+6);
			q.push(tmp*10+8);
			q.pop();
		}
		while(!q.empty()){
			a[count++]=q.front();
			q.pop();
		}
		cout<<count<<endl;
		for(int i=count-1;i>=0;i--) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
