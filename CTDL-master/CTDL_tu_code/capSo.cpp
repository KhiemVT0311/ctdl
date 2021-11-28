#include<bits/stdc++.h>
using namespace std;
struct capso{
    int dau,cuoi;
};
capso A[105]; int n,F[105];
bool cmp(capso x, capso y){
	return(x.cuoi < y.cuoi);
}
main(){
	int t,n,i,j,kq;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++)
			cin>>A[i].dau>>A[i].cuoi;
		sort(A,A+n,cmp);
		kq=0;
		for(i=0;i<n;i++) F[i]=1;
		for(i=1;i<n;i++){
			for(j=0;j<i;j++)
				if(A[j].cuoi<A[i].dau)
					F[i] = max(F[i], F[j]+1);
			kq=max(kq,F[i]);
		}
		cout<<kq<<endl;
	}
}
