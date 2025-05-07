#include <stdio.h>
# include <stdlib.h>
int main()
{
    int year;
    while (scanf("%d", &year) != EOF) 
    {
        int isLeap = 0;
        int isBulukulu = 0;
        int isHuluculu = 0;

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
        {
            isLeap = 1;
        }

        if(year % 15 == 0)
        {
            isHuluculu = 1;
        }

        if (isLeap && year % 55 == 0) 
        {
            isBulukulu = 1;
        }

        if (isLeap) 
        {
            printf("This is leap year.\n");
        } 
        if(isLeap == 0 && isHuluculu == 0 && isBulukulu == 0)
        {
            printf("This is an ordinary year.\n");
        }

        if(isHuluculu) 
        {
            printf("This is huluculu festival year.\n");
        }

        if (isBulukulu) 
        {
            printf("This is bulukulu festival year.\n");
        }
        printf("\n");
    }
    return 0;
}
