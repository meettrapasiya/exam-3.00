#include<stdio.h>

main()
{
		float angle1,angle2,angle3;
	
	printf("enter the first angle");
   	scanf("%f",&angle1);
   	printf("enter the second angle");
   	scanf("%f",&angle2);
   	
   	angle3 = 180 - (angle1 + angle2);
   	
   	printf("the third angle is %.2f\n",angle3);
}