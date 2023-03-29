#include<stdio.h>
#include<conio.h>
int main() 
{
	int n,i,even=0,odd=0;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=0; i=n; i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
	}
	printf("the sum of even number : %d",even);
	printf("the sum of odd number : %d",odd);
}
