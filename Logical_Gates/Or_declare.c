#include<stdio.h>
void main()
{
 	
	int a=45;
	float b=49.9;
	int c=50;
	int cond_1=a==b;
	int cond_2=b>c;

	printf("Enter the a value:");
	printf("The value of a : %d\n",a);

	printf("Enter the b value:");
	printf("The value of b: %d\n",b);

	printf("Enter the c value:");
	printf("The value of ac: %d\n",c);

	printf("output of cond_1 : %d\n",a==b);
	printf("output of cond_2 : %d\n",b>c);
	printf("output of cond_1 || cond_2 is :%d",a==b || b>c);
}

