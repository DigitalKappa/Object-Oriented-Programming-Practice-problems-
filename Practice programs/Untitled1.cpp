 #include <stdio.h>
 int main()
 {
 int a=50;
 int b=2;
 int step=0;
 int result=0;
 code:
 	if(a%b==0||a/b==25)
 	result=result-b;
 	step++;
 	goto code;
 }
 printf ("%d", step);
 return 0;
}