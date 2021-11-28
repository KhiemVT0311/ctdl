//Doc huong dan lam theo thu tu cac ham xuat hien trong ham main
#include<bits/stdc++.h>
using namespace std;
/* Ta ko quan tam chia thanh k tap con thi nhung tap ay bao gom cac so nao ( chi quan tam den tonog cua tap con ay)
==> mang tapcon[] de luu gia tri la tong cua cac tap con 1 -> k (dc danh so tu 0 -> k-1) 
   Su dung ham de quy bang ham bool -> nhanh hon void (bat buoc dung bool neu ko TLE)
*/
bool Try(int i,int batdau,int s1phan,int n,int k,int a[],int tapcon[],bool b[]) //so i la so thu tu cua tap con dang xet
{
	if(tapcon[i]==s1phan) //neu tong cua tap con nao do = tong 1 phan thi if( vi du: tong cac phan tu trong mang =18 -> chia 3 phan -> s1phan=18/3=6
	{
		if(i==k-2) return true; // vi dc chia lam k tap -> neu k-1 tap con deu co tong = nhau(=s1phan) ->True (tap cuoi cung hien nhien co tong=s1phan);
		return Try(i+1,n-1,s1phan,n,k,a,tapcon,b);// neu chua xet den tap thu k-1 thi tiep tuc goi de quy de xet tiep tap (i+1)
	}
	for(int j=batdau;j>=0;j--) //bien bat dau dung de luu vi tri cua so da dc chon trc do ( tranh phai duyet lai tu dau->ton time) 
	{
		if(b[j]) // neu b[j]=true -> so tai vi tri j chua dc chon->co the chon
		{
			if(tapcon[i]<s1phan) // tong tap con dang xet < s1phan thi chon tiep,neu ko-> ko chon nua (cang chon thi gia tri tapcon[i] cang lon
			{
				tapcon[i]+=a[j]; // cong a[j]( gia tri cua vitri j (.) mang a vao tong tap con
				b[j]=false;// danh dau vi tri ay da dc chon
				bool xet=Try(i,j-1,s1phan,n,k,a,tapcon,b);// (***bat buoc phai co bc tao 1 gia tri bool gans bang ham Try, neu chi goi Try -> auto tra ve false)
				//goi de quy de xet tiep phan tu tiep theo trong mang( phan tu sau phan tu j vua dc chon -> j-1)
				//vi van chua tinh tong cua tapcon[i] xong nen i van giu nguyen
				tapcon[i]-=a[j]; // sau khi goi de quy thi quay lui neu thay gia tri cua tapcon[i] != s1phan
				b[j]=true;		//-> tra lai gia tri cu cho tapcon[i] va huy danh dau vi tri b[j] (b[j]==true)	
				if(xet) return true; //->neu ham Try dung return true;
			}
		}
		
	}
	return false; // neu sai mac dinh return false
}
bool ketqua(int a[],int n,int k)
{
	// co k tap con -> cac tap con dc danh so tu 0 -> k-1;
	bool b[150]; // mang b danh dau cac so da chon (chua chon) trong mang a;
	int tapcon[100]; // chia mang thanh k tap con (moi phan tapcon[i] tuong ung voi tong cua tap i trong k tap)
	int stong=accumulate(a,a+n,0);  //tinh tong cac phan tu cua a;
	if(k==1) return true; //TH: chia mang a thanh 1 tap con -> mang a
	if(n<k) return false; // TH: khong the chia thanh k tap khi so phan tu < k;
	if(stong%k!=0) return false; //TH: ko the chia thanh k tap con co tong = nhau neu tong ko chia het cho k;
	int s1phan=stong/k; //tong cua 1 tap con=(tong phan tu mang cua a)/k;
	if(a[n-1]>s1phan) return false;//TH: neu phan tu max cua mang > tong cua 1 tap con -> false vi ko the chia de cac tap con co tong = nhau
	for(int i=1;i<k;i++) tapcon[i]=0; // khoi tao cho tong cua tap con tu 1 -> k-1 tap = 0 (tap dau tien se khoi tao o bc sau)
	for(int i=0;i<n;i++) b[i]=true; //vi chua co so nao dc chon tu mang a -> khoi tao mang danh dau = true;
	tapcon[0]=a[n-1]; // gan tam gia tri tong cua tap thu 1 = gia tri max cua mang ( so lon hon -> ti le xep dc nhanh hon)
	b[n-1]=false; // da lay so cuoi cung cua mang -> danh dau vi tri ay = false (da dc chon)
	return Try(0,n-1,s1phan,n,k,a,tapcon,b);// goi de quy dong thoi tra ve ket qua cho ham ketqua();
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		int a[150];
		cin>>n>>k;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n); //sap xep lai mang de khi xet tu duoi len tren gap so lon hon ti le sap dc nhanh hon
		if(ketqua(a,n,k)) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
