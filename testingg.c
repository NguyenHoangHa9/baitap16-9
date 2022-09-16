#include <stdio.h> 
#include <stdlib.h> 
int check(int num);
void main(){
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("Nhap so %d : ",i+1);
		scanf("%d",&a[i]);
	} 
	for(i=0;i<5;i++){
		if(check(a[i])==0)
			printf("\nBoi cua so chia het 50 : %d ",a[i]);
	}
} 
int check(int num ){
	if(num % 50 ==0 ){
	return 0;
	}else
	return 1; 

}
