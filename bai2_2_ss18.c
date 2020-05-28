#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int temp[5][5];
	int i,j;
	int max,min;
	xacdinh_nhietdo_MIN_MAX( temp[5][5]);

	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf ("thanh pho thu %d,nam thu %d: ",i+1,j+1);
			scanf ("%d",temp[i][j]);
		}
	}
 for (i=0;i<5;i++)
printf ("> nam thu %d: \n",i+1);
	}
 void xacdinh_nhietdo_MIN_MAX(int temp[0][0] )
 {
int	max=0;
int	min=temp[i][0];
int i,j;
int cell=temp[i][0];	
		for (i=0;i<5;i++)
	{
			for (j=0;j<5;j++)
			{
				if (cell<min)
				min=cell;
				if (cell>max)
				max=cell;
			}
		printf ("thanh pho thu %d MAX la %d \n",i+1,max);
		printf ("thanh pho thu %d MIN la %d \n",i+1,min);
	}
}
