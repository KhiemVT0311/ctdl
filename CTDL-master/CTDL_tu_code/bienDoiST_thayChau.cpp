#include<bits/stdc++.h>
using namespace std;
void BFS(int s,int t){
	int Queue[100000];
	int in,out;
	int check[100000];
	in=-1;
	out=0;
	Queue[++in]=s;
	for(int i=0;i<100000;i++) check[i]=0;
	check[s]=1;
	while(in>=out){
		int ss=Queue[out++];
		if(ss==t){
			cout<<out-1<<endl;
			return;
		}
		if(check[ss-1]==0){
			Queue[++in]=ss-1;
			check[ss-1]=1;
		}
		if(check[ss*2]==0&&ss<100000){
			Queue[++in]=ss-1;
			check[ss*2]=1;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int s,t;cin>>s>>t;
		BFS(s,t);
	}
	return 0;
}
