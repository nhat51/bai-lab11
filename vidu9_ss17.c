#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char lines[5][20];
	int ctr,longctr=0;
	int longest(char lines_arr[][20]); //khai bao ham
	for(ctr=0;ctr<5;ctr++)      	  //nhap gia tri cua chuoi vao mang
	{
		printf ("enter string %d: ",ctr+1);
		scanf("%s",lines[ctr]);
	}
	longctr=longest(lines);			//truyen chuoi vao ham
	printf ("\n the longest string is %s",lines[longctr]);
}
int longest(char lines_arr[][20]){
	int i=0, l_ctr=0,prev_len,new_len;
	prev_len=strlen(lines_arr[i]); 	//xac dinh do dai cua phan tu dau tien
	for (i++;i<5;i++)
	{
		new_len=strlen(lines_arr[i]); // xac dinh do dai cac phan tu tiep theo
		if (new_len>prev_len)
		l_ctr=i;                	//luu ki hieu cua chuoi dai hon
		prev_len=new_len;
	}
	return l_ctr;
	
}
