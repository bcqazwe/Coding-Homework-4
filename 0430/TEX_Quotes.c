#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 1000

int main()
{
    char input[MAX_LENGTH];
    int trigger = 1;
    while ((fgets(input, MAX_LENGTH, stdin)) != NULL) 
    {
        input[strcspn(input, "\n")] = 0;
        for(size_t i = 0;i<strlen(input);i++)
        {
            if(input[i] =='"')
            {
                if(trigger %2 == 1)
                {
                    printf("``");
                    trigger++;
                }
                else if(trigger %2 == 0)
                {
                    printf("''");
                    trigger++;
                }
            }
            else
            {
                printf("%c", input[i]);
            }
        }
        printf("\n");
    }   
    return 0;
}