#include <stdio.h>
union data 
{
    int i;
    float f;
};
int main() 
{
    union data d;
    char choice;
    printf("Enter 'i' for integer or 'f' for float: ");
    scanf("%c", &choice);
    if (choice == 'i') 
	{
        printf("Enter an integer: ");
        scanf("%d", &d.i);
        printf("You entered: %d\n", d.i);
    } else if (choice == 'f') 
	{
        printf("Enter a float: ");
        scanf("%f", &d.f);
        printf("You entered: %f\n", d.f);
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}
