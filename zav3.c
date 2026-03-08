#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <errno.h>

int main()
{
    FILE *f = fopen("zav3.txt", "w");
    if (f == NULL)
    {
        perror("Can not open the file");
        return 1;
    }

    srand(time(NULL));
    printf("Start to roll the dice ...");
    for (int i = 1; i <= 1000; i++)
    {
        int dice = (rand() % 6) + 1;
        int result = fprintf(f, "Roll %d: result %d\n", i, dice);
        if (result < 0)
        {
            printf("\n[ERROR] Recording stopped on roll %d!\n", i);
            printf("File size limit exceeded.\n");
            break;
        }
        fflush(f);
    }
    fclose(f);
    return 0;
}