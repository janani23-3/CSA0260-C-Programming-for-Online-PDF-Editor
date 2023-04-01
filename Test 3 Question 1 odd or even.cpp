#include<stdio.h>
#include<conio.h>
void is_even()
{
	int num;
	printf("Enter an integer : ");
	scanf("%d", &num);
	if(num % 2 == 0)
	    printf("The integer %d is Even", num);
	else
	    printf("The integer %d is Odd", num);
}
int main()
{
	is_even();
	return 0;
}
