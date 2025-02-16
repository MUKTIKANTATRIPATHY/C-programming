#include<stdio.h>
void main()
{
    float celsius, farenhiet;
    printf("Enter the temprature in celsius : ");
    scanf("%f", &celsius);

    farenhiet = (celsius* 9.0/5.0) + 32;
    printf("%2f celsius is equal to %2f farenhyte\n", celsius, farenhiet);
    return 0;

}