#include<stdio.h>
#include<string.h>

int main(){
    // char valor = 'c';
    // char palavra[5] = {'c', 'a', 's', 'a'};

    // printf("%c\n", valor);
    // printf("%s\n", palavra);

    char username[20];
    char padrao[20] = "admin";

    printf("Usuario: ");
    fgets(username, 20, stdin);

    printf("%d | %d\n", strlen(username), strlen(padrao));

    if(strcmp(username, padrao)){
        printf("Usuario: %s \nAcesso Permitido", username);
    } else{
        printf("Usuario: %s \nAcesso Negado", username);
    }

    return 0;
}