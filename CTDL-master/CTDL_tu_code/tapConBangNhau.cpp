#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2!=0){
			cout<<"NO"<<endl;
			continue;
		}
		sum/=2;
		sort(a,a+n);
		string check="NO";
		for(int i=0;i<n;i++){
			int tmp=0;
			for(int j=i;j<n;j++){
				tmp+=a[j];
				if(tmp==sum){
					check="YES";
					i=n;
					break;
				}
				else if(tmp>sum) break;
			}
		}
		cout<<check<<endl;
	}
	
	return 0;
}
