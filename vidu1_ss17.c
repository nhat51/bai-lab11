#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	puts ("enter your name: ");// hien thi ra man hinh
	gets (name); //nhap ten
	puts ("hi there: ");
	puts (name );
	return 0;
}
