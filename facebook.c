#include <stdio.h>
#include <string.h>

int main()
{
    char username[50];
    char password[50];
    char login_username[50] = "admin";
    char login_password[50] = "password";

    printf("Enter your username: ");
    scanf("%s",username);
    printf("Enter your password: ");
    scanf("%s",password);

    if(strcmp(username,login_username) == 0 && strcmp(password,login_password) == 0)
    {
        printf("Login Successful!\n");
    }
    else
    {
        printf("Login Failed!\n");
    }

    return 0;
}
