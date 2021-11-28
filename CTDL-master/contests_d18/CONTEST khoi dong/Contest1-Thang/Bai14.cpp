#include<bits/stdc++.h>
 
using namespace std;
 
struct mydata{
    int val;
    int cnt;
    int pos;
};
 
bool cmp(mydata a, mydata b){
    if (a.cnt > b.cnt) return true;
    if (a.cnt == b.cnt && a.pos < b.pos) return true;
    return false;
}
 
void process(){
    int n;
    int index = 0;
    cin >> n;
    vector<long long> a(n);
    vector<mydata> b;
    map<long long, long long> mymap;
    for(int i=0;i<n;i++){
        cin >> a[i];      
        if (mymap[a[i]] == 0){
            mydata tmp;
            tmp.val = a[i];
            tmp.pos = index++;          
            b.push_back(tmp);
        }
        mymap[a[i]]++;
    }
    for(int i=0;i<b.size();i++){
        b[i].cnt = mymap[b[i].val];
    }
    sort(b.begin(), b.end(), cmp);
   
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[i].cnt;j++) cout << b[i].val << " ";
        // cout << b[i].val << " " << b[i].cnt << endl;
    }
    cout << endl;
}
 
 
int main(){
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}
