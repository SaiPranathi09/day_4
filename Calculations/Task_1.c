#include<stdio.h>
int main()
{
	int length;
	int breadth;
	int Perimeter_of_rectangle;
	int Area_of_rectangle; 

	printf("enter the length :");
	scanf("%d",&length);
	printf("The length is :%d\n",length);

	printf("enter the breadth:");
	scanf("%d",&breadth);
	printf("The length is :%d\n",breadth);

	Area_of_rectangle=length*breadth;
	printf("The value of Area_of_rectangle  is :%d",length*breadth );

	Perimeter_of_rectangle=2*(length+breadth);
	printf("The value of Perimeter_of_rectangle is :%d",2*(length+breadth));
	return 1;
}





