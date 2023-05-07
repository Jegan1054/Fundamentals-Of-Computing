#include <stdio.h>
int main()
{
    int num, digit, rev = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while(num != 0)
	{
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("The digits of the number in reverse order are: ");

    while(rev != 0) 
	{
        digit = rev % 10;
        printf("%d ", digit);
        rev /= 10;
    }
	return 0;
}