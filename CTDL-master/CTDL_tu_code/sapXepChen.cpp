#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
void xuatMang(int c,int b){
    for(int i=c;i<=b;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        int j=i-1,max=a[i];
        while(j>=0&&a[j]>max){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=max;
        if(is_sorted(a,a+n)==false){
            cout<<"Buoc "<<count++<<": ";
            xuatMang(0,i);
            continue;
        }
        cout<<"Buoc "<<count++<<": ";
        xuatMang(0,i);
        return 0;
    }
    return 0;
}