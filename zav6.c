#include <stdio.h>

void recursive_function(int depth)
{
    char buffer[1024];

    if (depth % 100 == 0)
    {
        printf("Current stack depth: %d\n", depth);
    }

    recursive_function(depth + 1);
}

int main()
{
    printf("Starting recursive function to exhaust stack...\n");
    recursive_function(1);
    return 0;
}