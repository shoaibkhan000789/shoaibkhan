#include<studio.h>

void main (){
 int a=7, b=2;

 printf("%d + %d = %d (sizeof \"+\" %d byte(s))\n",a,b,a+b,sizeof(a+b));
 printf("%d - %d = %d (sizeof \"-\" %d byte(s))\n",a,b,a+b,sizeof(a+b));
 printf("%d * %d = %d (sizeof \"*\" %d byte(s))\n",a,b,a+b,sizeof(a+b));
 printf("%d / %d = %d (sizeof \"/\" %d byte(s))\n",a,b,a+b,sizeof(a+b));

 printf("%d / %d = %.1f (result of using a/b even with %c%c format)\n",a,b,a/b);
 printf("%d / %d = %.1f (result of using (float)a/b\n",a,b,(float)a/b);
 }
