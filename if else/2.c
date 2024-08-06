#include<stdio.h>

 void main()
{
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	
	//a,b,c,d
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(b>c)
			{
				printf("b is max");
			}
			else
			{
				printf("c is max");
			}
			
		}
		
		
		
	}
	else
	{
		if(c>b)
		{
			printf("c is max");
		}
		else
		{
			printf("b is max");
		}
		
	
	}
	

}

