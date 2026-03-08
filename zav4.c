#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    unsigned long long count = 0;

    printf("Lottery simulation started. Generating numbers...\n");

    while (1)
    {
        for (int i = 0; i < 7; i++)
        {
            int num = (rand() % 49) + 1;
        }

        for (int i = 0; i < 6; i++)
        {
            int num = (rand() % 36) + 1;
        }

        count++;
        if (count % 100000 == 0)
        {
            printf("Generated %llu lottery sets...\n", count);
        }
    }

    return 0;
}