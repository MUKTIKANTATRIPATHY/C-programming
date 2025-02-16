#include<stdio.h>
int main()
{
    float principle, time, rate_of_interest, interest;

    printf("enter principle: ");
    scanf("%f", &principle);

    
    printf("enter time(in years): ");
    scanf("%f", &time);


    printf("enter rate_of_interest(in percentage): ");
    scanf("%f", &rate_of_interest);

    interest = (principle * rate_of_interest * time)/ 100;

    printf("the simple interest is %.2f", interest);
    return 0; 

}