#include<stdio.h> //we will use printf and scanf

void main() // main function is "ēntry point" and it should obliga$
 {
 char a='A';
 printf("a variable value as symbol: %c\n",a);
 printf("a variable value as decimal number: %d\n",a);
 printf("a variable value as octal number: %o\n",a);
 printf("a variable value as hexadecimal number: %x\n",a);
 
printf ("Dear user,please enter any symbol:");
scanf("%c",&a);
printf("your selected value as symbol: %c\n",a);
printf("your selected value as decimal number: %d\n",a);
printf("your selected value as octal number: %o\n",a);
printf("your selected value as hexadecimal number: %x\n",a);

char b=127;
printf("b char variable value as decimal number (?127): %d\n",b);

char c=128;
printf("c char variable value as decimal number (?128): %d\n",c);

char d=129;
printf("d char variable value as decimal number (?129):%d\n",d);
 }

