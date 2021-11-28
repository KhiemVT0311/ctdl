#include<iostream>
#include<deque>
using namespace std;
int main(){
	int t;cin>>t;
	deque<string> dq;
	while(t--){
		string sql;cin>>sql;
		if(sql=="PUSHFRONT"){
			string x;cin>>x;
			dq.push_front(x);
		}
		else if(sql=="PRINTFRONT"){
			if(!dq.empty()) cout<<dq.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(sql=="POPFRONT"){
			if(!dq.empty()) dq.pop_front();
		}
		else if(sql=="PUSHBACK"){
			string x;cin>>x;
			dq.push_back(x);
		}
		else if(sql=="PRINTBACK"){
			if(!dq.empty()) cout<<dq.back()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(sql=="POPBACK"){
			if(!dq.empty()) dq.pop_back();
		}
	}
	return 0;
}
