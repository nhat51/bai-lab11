#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 char str1[20];
 char str2[20];
 int loc;
 
 
 puts ("enter string 1: ");
 gets (str1);
 puts ("enter string 2: ");
 gets (str2);
 loc= strstr(str2,str1);
 if (loc != NULL)
 printf ("%s occurs in %s",str1,str2);
 else 
 printf ("%s does not occur in %s ",str1,str2);
 return 0;
}

