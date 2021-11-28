#include<bits/stdc++.h>

using namespace std;
/*Cach lam:
Tong nho nhat la tong cua cac so bi ghi nham '6' thanh '5'
Tong lon nhat la tong cua cac so bi ghi nham '5' thanh '6'
*/
int main()
{
	string a,b,c,d;// string c,d de luu gia tri cua 2 so ghi sai
	cin>>a>>b;
//Th1 : Tinh tong nho nhat
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='6') c.push_back('5'); //nhung cho nao trong a co chu so '6' thi them vao c la '5'
		else c.push_back(a[i]); 
	}
	stringstream num(c);//line 18-20 ham chuyen tu string -> so ( string c -> num1) **LUU Y: num la bien chu ko phai cu phap
	int num1=0;
	num>>num1;
	//lam tuong tu voi b va d
	for(int i=0;i<b.length();i++)
	{
		if(b[i]=='6') d.push_back('5');
		else d.push_back(b[i]); 
	}
	stringstream numd(d); //numd la bien
	int num2=0;
	numd>>num2;
	cout<<num1+num2<<" "; //tong nho nhat 
	c.clear();
	d.clear();
//Th2: Tinh tong lon nhat
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='5') c.push_back('6'); //nhung cho nao trong a co chu so '5' thi them vao c la '6'
		else c.push_back(a[i]); 
	}
	stringstream nume(c);// line 39-40 ham chuyen string -> so ( string c -> num1)
	nume>>num1;
	for(int i=0;i<b.length();i++)
	{
		if(b[i]=='5') d.push_back('6');
		else d.push_back(b[i]); 
	}
	stringstream numf(d);
	numf>>num2;
	cout<<num1+num2;//tong lon nhat
	return 0;
}

