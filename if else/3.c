#include<stdio.h>

void main()
{
	int a,b,c,d,e;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	printf("enter e:");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					printf("a is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(c>d)
				{
					printf("c is max");
				}
				else
				{
					printf("d is max");
				}
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

