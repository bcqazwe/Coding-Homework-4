#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 1000

const char *haab_months_array[] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu"};
const char *tzolkin_months_array[] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok","chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
int main()
{
    char input[MAX_LENGTH];
    int testCase;
    scanf("%d", &testCase);
    getchar();
    printf("%d\n", testCase);
    while(testCase--)
    {
        fgets(input,MAX_LENGTH,stdin);
        input[strcspn(input, "\n")] = 0;
        char *haab_day = strtok(input, " ");
        char *haab_month = strtok(NULL, " ");
        char *haab_year = strtok(NULL, " ");
        haab_day[strcspn(haab_day, ".")] = 0;
        int haab_days_int = atoi(haab_day);
        int haab_year_int = atoi(haab_year);
        int haab_month_index;
        for(haab_month_index = 0; haab_month_index < 18; haab_month_index++)
        {
            if(strcmp(haab_month, haab_months_array[haab_month_index]) == 0)
            {
                break;
            }
        }
        int total_days = haab_year_int *365 + haab_month_index * 20 + haab_days_int;
        int tzolkin_days = (total_days % 13) + 1;
        char tzolkin_month[15];
        strcpy(tzolkin_month, tzolkin_months_array[(total_days % 20)]);
        int tzolkin_year = total_days / 260;
        printf("%d %s %d\n", tzolkin_days, tzolkin_month, tzolkin_year);
    }
    return 0;
}