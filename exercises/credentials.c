#include <stdio.h>
#include <string.h>
int main(void)
{
    char username[] = "Kazungu";
    char password[] = "hello";
    char username_2[20];
    char password_2[20];

    printf("Enter a username: ");
    scanf("%s", username_2);
    printf("Enter a password: ");
    scanf("%s", password_2);

    // if (strcmp(username, username_2) == 0 && strcmp(password, password_2) == 0)
    //     printf("Success\n");
    // else
    //     printf("Fail\n");
    if (username == username_2)
        printf("Hello");

    return 0;
}