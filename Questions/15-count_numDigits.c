// Count the number of digits in a number.

#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a number= ");
    scanf("%d", &num);

    // count numbers
    if (num == 0)
    {
        printf("coount=1");
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
        printf("Count = %d", count);
    }

    return 0;
}