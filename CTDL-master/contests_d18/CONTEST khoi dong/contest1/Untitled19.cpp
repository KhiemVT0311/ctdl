#include <bits/stdc++.h> 
using namespace std;
// Function to print the divisors 
//Vi du uoc 100 co cac cap so sau:(1,100);(2,50);(4,25);(5,20);(10,10);
//Trong do TH:(10,10) chi in ra 1 lan
long printDivisors(long long n) 
{ 
	long d=0;
    // Note that this loop runs till square root 
    for (long i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i&&i%2==0) d++;
  
            else // Otherwise print both 
        	{
        		if((n/i)%2==0) d++;
        		if(i%2==0) d++;
			}
        } 
    }
	return d; 
} 
/* Driver program to test above function */
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
   		cin>>n;
   		long k=printDivisors(n);
   		cout<<k<<endl; 
	}
    return 0; 
} 
