#include<stdio.h>
#include<conio.h>

main()
{
	float angle1,angle2,angle3;
	printf("Enter angle1:");
	scanf("%f",&angle1);
	
    printf("Enter angle2:");
	scanf("%f",&angle2);
	
	angle3=180-(angle1+angle2);
	
	printf("angle3:%2f",angle3);
	

}

