//#include<bits/stdc++.h>
//using namespace std;
//int t;
//unsigned long long a[1000005];
//long long checkCbrt(long long n){
//	int can3=cbrt(n);
//	if(can3*can3*can3==n) return n;
//	return 0;
//}
//string result(string n,string a){
//	int lena=a.length();
//	int lenn=n.length();
//	bool ok=false;
//	int index=0;
//	for(int i=0;i<lena;i++){
//		for(int j=index;j<lenn;j++){
//			if(a[i]==n[j]){
//				index=j;
//				ok=true;
//				break;
//			}
//		}
//		if(ok==false) return "-1";
//		ok=false;
//	}
//	return a;
//}
////void f(){
////	for(int i=0;i<1000005;i++){
////		a[i]=i*i*i;
////	}
////}
//int main(){
//	cin>>t;
////	f();
//	while(t--){
//		string n;cin>>n;
//		unsigned long long m=cbrt(stoll(n));
//		bool ok=false;
//		for(int i=5;i>0;i--){
//			long long tmp1=i*i*i;
////			cout<<"m="<<i<<" "<<tmp1;
//			string tmp=result(n,to_string(tmp1));
////			cout<<"tmp="<<tmp<<endl;
//			if(tmp!="-1"){
//				cout<<tmp<<endl;
//				ok=true;
//				break;
//			}
//		}
//		if(ok==true) continue;
//		cout<<-1<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
string num2str(long long u)
{
	string c;
	ostringstream num;
	num<<u;
	c=num.str();
	return c;
}
bool check(string a,string b) 
{
	int k=-1; 
	int ok=0; 
	for(int i=0;i<a.length();i++) 
	{
		ok=0; 
		for(int j=k+1;j<b.length();j++) 
		{ 
			if(a[i]==b[j]) 
			{
				k=j;ok=1;
				break; 
			}	
		}
		if(ok==0)  return false; 
	}
	return true;
}
int main()
{
	int t;	
	cin>>t;
	cin.ignore();
	while(t--)
	{	
		long long u;
		cin>>u;
		cin.ignore();
		string v=num2str(u);
		string s;
		long long k;
		int ok=0; 
		int m=round(cbrt(u)); 
		for(int i=m;i>0;i--) 
		{
			k=round(pow(i,3)); 
			s=num2str(k);
			if(check(s,v)) 
			{
				cout<<s; 
				ok=1;
				break;
			}
		}		
		if(ok==0) cout<<-1;
		cout<<endl;
	}
	return 0;
}


