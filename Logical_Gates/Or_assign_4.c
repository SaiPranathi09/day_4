#include<stdio.h>
void main()
{
 	
	int a=20*40;
	float b=800.0;
	int c=300/10;
	int cond_1=a==b;
	int cond_2=b<c;

	printf("Enter the a value:");
	printf("The value of a : %d\n",a);

	printf("Enter the b value:");
	printf("The value of b: %f\n",b);

	printf("Enter the c value:");
	printf("The value of c: %d\n",c);

	printf("output of cond_1 : %d\n",a==b);
	printf("output of cond_2 : %d\n",b<c);
	printf("output of cond_1 || cond_2 is :%d",a==b || b>c);
}

