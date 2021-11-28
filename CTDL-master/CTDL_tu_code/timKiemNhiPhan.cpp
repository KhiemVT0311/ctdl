//#include<bits/stdc++.h>
//using namespace std;
//int t,a[1000005];
//string binary(int a[],int dau,int cuoi, int k){
//	if(cuoi>dau){
//		int mid=dau+(cuoi-dau)/2;
//		if(a[mid]==k) return to_string(mid+1);
//		if(a[mid]>k) return binary(a,dau,mid-1,k);
//		return binary(a,mid+1,cuoi,k);
//	}
//	return "NO";
//}
//int main(){
//	cin>>t;
//	while(t--){
//		int n,k;cin>>n>>k;
//		int a[n];
//		for(int i=0;i<n;i++) cin>>a[i];
//		cout<<binary(a,0,n,k)<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int index=-1;
		for(int i=0;i<n;i++) {
			int tmp;cin>>tmp;
			if(tmp==k) index=i+1;
		}
		if(index!=-1) cout<<index<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
