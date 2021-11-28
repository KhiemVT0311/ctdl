/*Cách làm:
Ðê bài cho sô N
- Ðâu tiên ta tìm sô M = cbrt(N) . Vì ta cân tìm sô khôi lâp phuong lon nhât bang cách loai bo di các chu sô cua N
-> Sô khôi lâp phuong lon nhât <= N
- Ta se sinh lân luot các sô khôi lâp phuong chay tu M (sô khôi lâp phuong tao ra gân voi N nhât, xét tu M dê tim max) cho dên 1
Tai sô khôi lâp phuong nào dc tao thành mà ta kiêm tra thây nó dc tao ra tu viêc loai bo các chu sô cua N thì ta dung lai và in ra sô ây
**LUU Y: Dê thuân tiên cho viêc so sánh các chu sô cua sô khôi lâp phuong thì ta chuyên các sô liêu này vê dang string */
#include<bits/stdc++.h>
using namespace std;
string num2str(long long u) //hàm chuyên tu number -> string
{
	string c;
	ostringstream num;
	num<<u;
	c=num.str();
	return c;
}
bool check(string a,string b) //hàm kiêm tra xem sô khôi lâp phuong a có phai dc tao ra tu viêc loai bo các chu sô cua b ko
{
	/**Ta thây vì a dc tao ra tu b: -> Nêu có bât ky chu sô nào trong a mà ko có trong b ->return false
									-> Thu tu xuât hiên cua các chu sô trong a phai giông b */
	
	int k=-1; // biên k de luu tai vi trí nào thì a[i] = b[j] sau dó dê dam bao thu tu xuât hiên cua các chu sô trong b giông vs a thì ta lai xet tiêp tu vi tri k+1
			 // k bat dâu tu k=-1 thì khi xet vi tri tu vi tri k+1 cung dong nghia vs viêc xét tu ký tu b[0]
	int ok=0; // biên ok dê kiêm tra nêu có bât ky ký tu nào có trong a mà ko có trong b thì return false
	for(int i=0;i<a.length();i++) //duyêt hêt các ky tu trong xâu ( các chu sô trong sô a )
	{
		ok=0; // cho ok=0 tai môi lân xét 1 ký tu trong xâu a
		for(int j=k+1;j<b.length();j++) // dò trong xâu b bat dau tu vi tri j=k+1 
		{ 
			if(a[i]==b[j]) // tai vi tri nào mà a[i]==b[j] <tìm thây ký tu a[i] trong xâu b tai vi tri j>
			{
				k=j;ok=1; //gán k=j , ok=1
				break; //dã tìm thây -> ko dò nua de chuyên sang ký tu tiêp theo trong xâu a
			}	
		}
		if(ok==0)  return false; //nêu ko tìm thây ky tu a[i] trong xâu b -> return false
	}
	return true; //thoa mãn hêt thì return true
/* Tóm lai: Dau tiên ta se tìm xem a[0] nam o vi trí k nào trong xâu b -> các ký tu nam trc vi trí k thì ko dc xét nua
Vì ký tu a[0] là chu sô dau tiên cua sô a, mà ta muôn dam bao tính chât thu tu xuat hiên các chu sô trong a phai giông b thì nhung sô nam o phía sau cua a phai nam o phía sau cua b
Vi du: ta có a=425 , b=541268
+Dau tiên ta xét sô 4 cua a -> nam o vi tri thu 2 cua b nên nhung sô dang trc sô 4 trong b ko dc xét nua (ta phai xét tiêp tu vi tri sau sô 4 trong b tuc la vi tri thu 2+1 = 3)
+Sau dây ta lai xét dên sô 2 cua a thì ta thây sô 2 nam o vi tri thu 4 trong b -> xét tiêp tu vi tri thu 4+1 = 5 cua b
+Cuoi cung ta xét sô 5 trong a, thì lúc này trong b tính tu vi trí dang xét(vi tri sô 5 duyêt dên hêt dãy) ko có sô 5 nào ca -> return false */
}
int main()
{
	int t;	
	cin>>t;
	cin.ignore();
	while(t--)
	{	
		long long u;
		cin>>u;
		cin.ignore();
		string v=num2str(u);
		string s;
		long long k;
		int ok=0; //danh dâu nêu tìm dc sô khôi lâp phuong max thì ok=1
		int m=round(cbrt(u)); //tìm sô m là sô lon nhat có thê de khi m^3 thì ra dc 1 sô lon gân = u
		for(int i=m;i>0;i--) // vì tìm sô lon nhat nên chay tu m vê 1
		{
			k=round(pow(i,3)); //tai sô k nào voi k= i^3 
			s=num2str(k);
			if(check(s,v)) //ta kiêm tra thây dung 
			{
				cout<<s; //in ra, cho ok=1, kêt thuc vòng lap luôn
				ok=1;
				break;
			}
		}		
		if(ok==0) cout<<-1;	//neu ko tìm thây sô nào hop lê -> -1
		cout<<endl;
	}
	return 0;
}

