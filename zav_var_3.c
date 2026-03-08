#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int total_mb = 0;
    printf("Starting memory allocation...\n");

    while (1)
    {
        void *p = malloc(1024 * 1024);

        if (p == NULL)
        {
            printf("\n[ERROR] Memory limit reached!\n");
            printf("Total allocated: %d MB\n", total_mb);
            break;
        }

        total_mb++;
        if (total_mb % 10 == 0)
        {
            printf("Allocated: %d MB\n", total_mb);
        }

        ((char *)p)[0] = 1;
    }

    return 0;
}