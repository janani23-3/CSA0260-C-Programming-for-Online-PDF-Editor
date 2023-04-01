#include <stdio.h>
struct Person 
{
    char name[50];
    int age;
    float height;
};
int main() 
{
    struct Person person = {"janani", 18, 5.1};
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);
    return 0;
}

