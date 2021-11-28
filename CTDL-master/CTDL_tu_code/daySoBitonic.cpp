#include<bits/stdc++.h>
using namespace std;
int a[105],n,tang[105],giam[105];
int tinh(){
    int i,j,sum,ans;
    for(i=1;i<n;i++){
        sum = 0;
        for(j=i-1;j>=0;j--)
            if(a[i]>a[j]) sum = max(sum,tang[j]);
        tang[i] += sum;
    }
    for(i=n-2;i>=0;i--){
        sum = 0;
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]) sum = max(sum,giam[j]);
        giam[i] += sum;
    }
    ans = 0;
    for(i=0;i<n;i++)
        ans = max(ans,giam[i]+tang[i]-a[i]);
    return ans;
}
main(){
    int t,i; cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
            giam[i] = tang[i] = a[i];
        }
        cout<<tinh()<<endl;
    }
}
