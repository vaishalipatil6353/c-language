#include<stdio.h>
#include<conio.h>
main()
{
	int hra,da,ta,salary;
    float total;
	
printf("Enter the hra:");
scanf("%d",&hra);

printf("Enter the da:");
scanf("%d",&da);

printf("Enter the ta:");
scanf("%d",&ta);

printf("Enter the salary:");
scanf("%f",& total);
total=hra+(hra* total)/300;
printf("total salary:%f",total);

}

