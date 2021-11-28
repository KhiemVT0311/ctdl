#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793238
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a[6];
		for(int i=0;i<6;i++)
			scanf("%d",&a[i]);
		double ab=sqrt((a[3]-a[1])*(a[3]-a[1])+(a[2]-a[0])*(a[2]-a[0]));
		double ac=sqrt((a[5]-a[1])*(a[5]-a[1])+(a[4]-a[0])*(a[4]-a[0]));
		double bc=sqrt((a[5]-a[3])*(a[5]-a[3])+(a[4]-a[2])*(a[4]-a[2]));
//		printf(" ab=%lf ac= %lf bc= %lf\n",ab,ac,bc);
		if(ab+ac>bc&&ab+bc>ac&&bc+ac>ab){
			printf("%0.3lf\n",(ab*ac*bc/(sqrt((ab+ac+bc)*(ab+ac-bc)*(ab+bc-ac)*(bc+ac-ab)))*ab*ac*bc/(sqrt((ab+ac+bc)*(ab+ac-bc)*(ab+bc-ac)*(bc+ac-ab)))*PI));
		}
		else{
			printf("INVALID\n");
		}
	}
}
