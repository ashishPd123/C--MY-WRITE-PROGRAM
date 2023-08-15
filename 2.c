#include<stdio.h>                                       #include<stdio.h>     
int main()                                               int main()
{                                                        {
	int length,breadth;                                  int length,breadth;
	printf("Enter the first no\n");                      printf("enter length");
	scanf("%d",&length);                                 scanf("%d",&length);
	printf("Enter the second no\n");                     printf("enter breadth");
	scanf("%d",&breadth);                                scanf("%d",&breadth);  
	printf("Area of a rectangle%d",length*breath);       printf("Area of rectangle :%d",(length*breadth));
	                        
	return 0;                                            return 0;
}                                                        }


#include<stdio.h>
int main()
{
	int length,breadth;
	int area=length*breadth;
	printf("The area of rectangl is=%d",area);
	
	return 0;
}
