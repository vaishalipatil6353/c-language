#include<stdio.h>

 void main()
{
   char grade;	
   int mark;
   
   printf("enter your mark:");
   scanf("%d",& mark);
   
   grade=(mark>=90 && mark<=100)?'A'
        :(mark>=80 && mark<=90)?'B'
        :(mark>=70 && mark<=80)?'C'
        :(mark>=60 && mark<=70)?'D'
        :(mark>=40 && mark<=60)?'E'
        : 'F';
        
    printf("your grade is % c",grade);
        
        
     switch (grade)
   {
   
   
    case'A':printf("execellent work!");
    break;
    case'B':printf("well done");
    break;
    case'C':printf("good job");
    break;
    case'D':printf("passed");
    break;
    case'E':printf("not is better");
    break;
    case'F':printf("failed");
    break;
    }
      if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='E')
      {
      	printf("congratulation!you are eligible for next level");
	  }
     else
     {
     	printf("pleae");
	 }
        
}
		

