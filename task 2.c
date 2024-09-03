#include<stdio.h>

main() 
{
    int age;

    printf("Enter the age of the candidate: ");
    scanf("%d", &age);

    if (age >= 18) 
	{
        printf("The candidate is eligible to cast their own vote.\n");
    } else 
	{
        printf("The candidate is not eligible to cast their own vote.\n");
    }
}
