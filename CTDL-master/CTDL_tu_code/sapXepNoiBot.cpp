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
    for(int i=0;i<n-1;i++){
        bool check=false;
       for(int j=0;j<n-1-i;j++){
           if(a[j]>a[j+1]){
               int tmp=a[j+1];
               a[j+1]=a[j];
               a[j]=tmp;
               check=true;
           }
        }
        if(check==true){
            cout<<"Buoc "<<count++<<": ";
            xuatMang();
            continue;
        }
        break;
    }
    return 0;
}