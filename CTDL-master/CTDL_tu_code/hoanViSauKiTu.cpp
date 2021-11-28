#include<iostream>
#include<algorithm>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string n;cin>>n;
		cout<<n<<" ";
		while(next_permutation(n.begin(),n.end())){
			cout<<n<<" ";
		}
		cout<<endl;
	}
	return 0;
}
