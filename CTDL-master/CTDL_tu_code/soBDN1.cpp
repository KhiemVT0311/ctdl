//#include<bits/stdc++.h>
//using namespace std;
//int t;
//bool equalString(string a,string b){
//	int lena=a.length(),lenb=b.length();
//	if(lena==lenb) return a<=b?true:false;
//	return lena<=lenb?true:false;
//}
//int main(){
//	cin>>t;
//	while(t--){
//		string s;cin>>s;
//		if(s=="0"||s=="1"){
//			cout<<s<<endl;
//			continue;
//		}
//		queue<string> ss;
//		ss.push("1"); int count=0;
//		while(!ss.empty()){
//			string tmp=ss.front();
//			if(equalString(tmp,s)){
//				count++;
//				ss.push(tmp+'0');
//				ss.push(tmp+'1');
//				ss.pop();
//				continue;
//			}
//			break;
//		}
//		cout<<count<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		string a;cin>>a;
		int len=a.length();
		int index=len;
		for(int i=0;i<len;i++) {
			if(a[i]>'1'){
				index=i;
				break;
			}
		}
		for(int i=index;i<len;i++) a[i]='1';
		unsigned long long tmp=0;
		for(int i=0;i<len;i++){
			if(a[len-1-i]=='1') tmp+=1<<i;
		}
		cout<<tmp<<endl;
	}
	return 0;
}
