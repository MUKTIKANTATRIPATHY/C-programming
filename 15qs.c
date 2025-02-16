#include <stdio.h>
 
int main()
{
 
    int length = 10, breath = 8;
    int Area, Perimeter;
    Area = length * breath;
    Perimeter = 2 * (length + breath);
    printf("Area of rectangle is : %d", Area);
    printf("\nPerimeter of rectangle is : %d", Perimeter);
    return 0;
}