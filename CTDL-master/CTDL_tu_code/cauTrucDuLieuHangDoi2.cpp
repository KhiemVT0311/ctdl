#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	queue<string> q;
	while(n--){
		string sql;cin>>sql;
		if(sql=="PUSH"){
			string x;cin>>x;
			q.push(x);
		}
		else if(sql=="POP"){
			if(!q.empty())q.pop();
		}
		else{
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
	return 0;
}
