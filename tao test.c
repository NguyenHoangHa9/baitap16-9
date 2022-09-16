#include<stdio.h>
#include <stdlib.h>
#include <math.h>
float getarea(int a,int b ,int c);
int chuvi(int a, int b, int c);
int main (){
	int a, b, c,ketqua2, count = 0;
	float ketqua1;
	int chon;
	printf("\nCanh a : ");
	scanf("%d",&a);
	
	printf("\nCanh b : ");
	scanf("%d",&b);
	
	printf("\nCanh c : ");
	scanf("%d",&c);
	
	ketqua1 = (float)getarea(a,b,c);
	ketqua2 = chuvi(a,b,c);

	if(a+b>c && a+c>b && c+b>a){
		do {
			printf("\nMenu");
			printf("\n1.Dien tich");
			printf("\n2.Chu vi");
			printf("\nVui long chon : ");
			scanf("%d",&chon);
			switch(chon)
			{
				case 1 : 
					printf("Dien tich tam giac la : %f ",getarea(a,b,c));
					break;
				case 2 :
					printf("Chu vi tam giac la : %d ",ketqua2);
					break;
				default : 
					printf("sai lua chon");
					break;
			}
			count++;
		}while(count<2);
	}else 
		printf("Error");
	
}
float getarea(int a, int b, int c){
	float dientich;
	float p;
	p = (float)( a + b + c)/2;
	dientich = (float)sqrt(p*(p-a)*(p-b)*(p-c));
	return dientich;
}
int chuvi(int a, int b, int c){
	int chuvi;
	chuvi = a + b + c;
	return chuvi;
}
