#include<stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 50; i++)
    {
        for(n = 2; n <= 50; n++)
        {
            if (i % n == 0)
            {
                break;
            }
        }
        if(i == n)
        printf("%d\n", i);
    }
    return 0;
}