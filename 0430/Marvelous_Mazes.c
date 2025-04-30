#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 1000

int main()
{
    char input[MAX_LENGTH];
    char alpha;
    while(fgets(input, sizeof(input), stdin) != NULL)
    {
        if(input[0] == '\n')
        {
            printf("\n");
            continue;
        }
        input[strcspn(input, "\n")] = 0;
        for(int i = 0;input[i] != '\0';)
        {
            int num = 0;
            while(isdigit(input[i]))
            {
                num = num+(input[i] - '0');
                i++;
            }
            if(isalpha(input[i]))                
            {
                if(input[i] == 'b')
                {
                    alpha = ' ';
                }
                else
                {
                   alpha = input[i];
                }
                for(int j = 0; j < num; j++)
                {
                    printf("%c", alpha);
                }
                i++;
            }
            else if(input[i] == '!')
            {
                printf("\n");
                i++;
            }
            else if(input[i] == '*')
            {
                printf("*");
                i++;
            }
        }
        printf("\n");
    }
    return 0;
}