#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "io.h"

int main(int argc, char *argv[])
{
    char buffer[BUF] = { '\0' };

    srand(time(0));

    for (int i = 0; i < MAX; i++)
        buffer[i] = rand() % 95 + ' ';

    buffer[NDX] = '\n';

    for (int n = 0; n < LEN; n++)
        fputs(buffer, stdout);

    return 0;
}
