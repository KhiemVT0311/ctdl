#include<bits/stdc++.h>
using namespace std;
int t,k,a,b;
void sumWithK(string a,string b,int k){
    string result="";
    int lengthA=a.length(),lengthB=b.length();
    int doDaiDu=abs(lengthA-lengthB);
    while(lengthA<lengthB){
    	a="0"+a;
    	lengthA++;
	}
	while(lengthB<lengthA){
    	b="0"+b;
    	lengthB++;
	}
	int nho=0;
    for(int i=lengthA-1;i>=0;i--){
    	int sum=a[i]+b[i]+nho-96;
    	nho=sum/k;
    	sum%=k;
    	result+=to_string(sum);
	}
//	cout<<"nho="<<nho<<endl;
	if(nho>1) result+='1';
	reverse(result.begin(),result.end());
	cout<<result<<endl;
}
void cong(string a,string b,int k)
{
	
	while(a.length()!=b.length())
	{
		if(a.length()<b.length())
		a="0"+a;
		else b="0"+b;
	}
	string ans="";
	int temp,nho=0;
	for(int i=a.length()-1;i>=0;i--)
	{
		temp=(a[i]-'0')+(b[i]-'0')+nho;
		nho=temp/k;
		temp%=k;
		ans=(char)(temp+'0')+ans;
	}
	if(nho==1)
	cout<<"1";
	cout<<ans<<endl;
}
int main(){
    cin>>t;
    while(t--){
        cin>>k>>a>>b;
//		k=rand()%10+2;
//		a=rand()%1000000007;
//		b=rand()%1000000007;
//		cout<<"k="<<k<<" "<<a<<" "<<b<<endl;
        sumWithK(to_string(a),to_string(b),k);
//        cong(to_string(a),to_string(b),k);
    }
    return 0;
}
