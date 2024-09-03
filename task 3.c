#include<stdio.h>

main() 
{
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (int temp = num; temp != 0; temp /= 10) 
	{
        remainder = temp % 10;     
        reversed = reversed * 10 + remainder; 
    }

    printf("Reversed number: %d\n", reversed);

}
