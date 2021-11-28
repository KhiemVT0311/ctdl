#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
void xuatMang(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        if(is_sorted(a,a+n)==false){
            cout<<"Buoc "<<count++<<":";
            xuatMang();
            continue;
        }
        cout<<"Buoc "<<count++<<":";
        xuatMang();
        return 0;
    }
    return 0;
}