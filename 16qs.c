#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if( num == 0)
    {
        printf("Entered number is zero", num);

    }
    else if (num > 0)
    {
        printf("Entered number is positive", num);
    }
    else{
        printf("Entered number is negetive");
    }
    
return 0;
}