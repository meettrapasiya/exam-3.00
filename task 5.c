#include <stdio.h>

int main() {
    int number, originalNumber, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    lastDigit = number % 10;

    while (number >= 10) 
	{
        number /= 10;
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit;

    printf("The sum of the first and last digit of %d is %d\n", originalNumber, sum);

}
