#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    printf("Bienvenido al bucle while.\n");

    while (i < 10)
    {
        printf("%d\n", i);
        i++;
        if (i == 5)
        {
            break;
        }
        else if (i == 7)
        {
            continue;
        }
    }
    return 0;
}
