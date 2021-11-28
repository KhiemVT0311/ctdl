#include<bits/stdc++.h>
using namespace std;
unsigned long long tongNhoNhat(long long a,long long b){
	long long a1=0,b1=0;
	while(a){
		int tmp=a%10;
		if(tmp==6) tmp=5;
		a1=a1*10+tmp;
		a/=10;
	}
	while(a1){
		a=a*10+a1%10;
		a1/=10;
	}
	while(b){
		int tmp=b%10;
		if(tmp==6) tmp=5;
		b1=b1*10+tmp;
		b/=10;
	}
	while(b1){
		b=b*10+b1%10;
		b1/=10;
	}
	return a+b;
}
unsigned long long tongLonNhat(long long a,long long b){
	long long a1=0,b1=0;
	while(a){
		int tmp=a%10;
		if(tmp==5) tmp=6;
		a1=a1*10+tmp;
		a/=10;
	}
	while(a1){
		a=a*10+a1%10;
		a1/=10;
	}
	while(b){
		int tmp=b%10;
		if(tmp==5) tmp=6;
		b1=b1*10+tmp;
		b/=10;
	}
	while(b1){
		b=b*10+b1%10;
		b1/=10;
	}
	return a+b;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n1,n2;
		cin>>n1>>n2;
//		long long tongnho=tongNhoNhat(n1,n2);
//		long long tonglon=tongLonNhat(n1,n2);
		cout<<tongNhoNhat(n1,n2)<<" "<<tongLonNhat(n1,n2)<<endl;
	}
	return 0;
}
//#include<bits/stdc++.h> 
//using namespace std; 
//  
//// Find new value of x after replacing digit 
//// "from" to "to" 
//int replaceDig(int x, int from, int to) 
//{ 
//    int result = 0; 
//    int multiply = 1; 
//  
//    while (x > 0) 
//    { 
//        int reminder = x % 10; 
//  
//        // Required digit found, replace it 
//        if (reminder == from) 
//            result = result + to * multiply; 
//  
//        else
//            result = result + reminder * multiply; 
//  
//        multiply *= 10; 
//        x = x / 10; 
//    } 
//    return result; 
//} 
//  
//// Returns maximum and minimum possible sums of 
//// x1 and x2 if digit replacements are allowed. 
//void calculateMinMaxSum(int x1, int x2) 
//{ 
//    // We always get minimum sum if we replace 
//    // 6 with 5. 
//    int minSum = replaceDig(x1, 6, 5) + 
//                 replaceDig(x2, 6, 5); 
//  
//    // We always get maximum sum if we replace 
//    // 5 with 6. 
//    int maxSum = replaceDig(x1, 5, 6) + 
//                 replaceDig(x2, 5, 6); 
//    cout << "Minimum sum = " << minSum; 
//    cout << "nMaximum sum = " << maxSum; 
//} 
//  
//// Driver code 
//int main() 
//{ 
//    int x1 = 5466, x2 = 4555; 
//    calculateMinMaxSum(x1, x2); 
//    return 0; 
//}  
