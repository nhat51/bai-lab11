#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char firstname[15];
	char lastname[15];
	
	printf ("enter your first name: ");
	scanf("%s",&firstname);
	printf ("enter your last name: ");
	scanf("%s",&lastname);
	strcat(firstname,lastname);//noi lastname voi firstname
	printf ("%s",firstname);
	return 0;
}
