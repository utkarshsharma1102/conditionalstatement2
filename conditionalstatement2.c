#include <stdio.h>

int main()
{
    int choice;
    printf("1.Burger,Rs 130\n2.French Fries,Rs 160\n3.Pizza,Rs 250\n4.Sandwiches,Rs 150\n5.Pasta,Rs 170");
    printf("Please select your choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Food Item: Burger\nPrice- 130");
        break;
    case 2:
        printf("Food Item: French Fries\nPrice- 160");
        break;
    case 3:
        printf("Food Item: Pizza\nPrice- 250");
        break;
    case 4:
        printf("Food Item: Sandwiches\nPrice- 150");
        break;
    case 5:
        printf("Food Item: Pasta\nPrice- 170");
        break;
    default:
        printf("Invalid choice");
        break;
    }
}
