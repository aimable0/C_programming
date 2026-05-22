#include <stdio.h>

void reverse(int argc, char *argv[])
{
    for (int i = 0; i < argc / 2; i++)
    {
        char *temp = argv[i];
        argv[i] = argv[argc - i];
        argv[argc - i] = temp;
    }
}

int main(int argc, char *argv[])
{
    if (argc > 1)
        for (int i = 1; i < argc; i++)
            printf("%s ", argv[i]);
    printf("\n");
    printf("Reversed\n");
    reverse(argc, argv);
    if (argc > 1)
        for (int i = 1; i < argc; i++)
            printf("%s ", argv[i]);
    printf("\n");
    return 0;
}
