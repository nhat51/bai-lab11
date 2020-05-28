#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[5],ctr,sum=0;
	int sum_arr(int num_arr[]);//khai bao ham
	for (ctr=0;ctr<5;ctr++) // nhap so vao mang
	{ 
		printf ("\n enter number %d: ",ctr+1);
		scanf("%d",&num[ctr]);
	}
	sum=sum_arr(num); //goi ham
	printf ("\n the sum of array is %d",sum);
}
int sum_arr(int num_arr[]) // dinh nghia ham
{
	int i,total;
	for (i=0,total=0;i<5;i++)// tinh tong
	total+=num_arr[i];
	return total;
	}
	
