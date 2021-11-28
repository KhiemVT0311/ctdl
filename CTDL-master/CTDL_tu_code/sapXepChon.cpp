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
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
int main(){
    cin>>n;
    // int count=1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]) min=j;
        }
        swap(a[i],a[min]);
        // if(is_sorted(a,a+n)==false){
        //     cout<<"Buoc "<<count++<<": ";
        //     xuatMang();
        //     continue;
        // }
        cout<<"Buoc "<<i+1<<": ";
        xuatMang();
        // return 0;
    }
    return 0;
}