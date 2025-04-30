#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 1000
int main()
{
    int i,testCase,mCount,fCount,piece;
    char input[MAX_LENGTH];
    scanf("%d", &testCase);
    getchar(); // Clear the newline character from the buffer after reading the integer
    while(testCase--)
    {
        mCount = 0, fCount = 0, piece = 0;
        fgets(input, MAX_LENGTH, stdin); // Clear the newline character from the buffer
        input[strcspn(input, "\n")] = 0; // Remove the newline character from the input string
        char *token = strtok(input, " ");
        while(token != NULL)
        {
            i = 0;
            while(i<2)
            {
                if(token[i] == 'M')
                {
                    mCount++;
                    i++;
                }
                else if(token[i] == 'F')
                {
                    fCount++;
                    i++;
                }
            }
            token = strtok(NULL, " ");
            piece++;
        }
        if(piece == 1)
        {
            printf("NO LOOP\n");
        }
        else if(mCount == fCount && mCount != 0 && fCount != 0)
        {
            printf("LOOP\n");
        }
        else
        {
            printf("NO LOOP\n");
        }
    }
    return 0;
}