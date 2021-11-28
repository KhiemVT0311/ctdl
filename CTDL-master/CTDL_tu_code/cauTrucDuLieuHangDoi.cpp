#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		queue<int> q;
		while(n--){
			int lenh;cin>>lenh;
			switch(lenh){
				case 1: cout<<q.size()<<endl;
						break;
				case 2: if(q.size()==0) 
							cout<<"YES"<<endl;
						else cout<<"NO"<<endl;
						break;
				case 3: int number;cin>>number; 
						q.push(number); 
						break;
				case 4: if(q.size()!=0) 
						q.pop();
						break;
				case 5: if(q.size()!=0) 
						cout<<q.front()<<endl;
						else 
						cout<<-1<<endl;
						break;
				case 6: if(q.size()!=0) 
						cout<<q.back()<<endl;
						else 
						cout<<-1<<endl;
						break;
				default: break;
			}
		}
	}
	return 0;
}
