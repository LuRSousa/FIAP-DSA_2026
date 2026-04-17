#include<stdio.h>

int main(){
    /*
        Interface do usuário com as opções:

        1- média do aluno: media = (nota1 + nota2) / 2
        2- verificação de presença: presenca >= 75% -> aprovado
                                    presenca < 75% -> atentar com a presenca
    */
    
    
    int opcao;
    float nota1, nota2, media;
    float presenca;

    printf("=== Sistema Escolar ===\n");
    printf("Digite: \n 1: para calcular sua media \n 2: verificar presenca \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: 
            printf("\n== Calculadora de Media ==\n");

            printf(" Digite sua primeira nota: ");
            scanf("%f", &nota1);

            printf(" Digite sua segunda nota: ");
            scanf("%f", &nota2);

            if(nota1 < 11 && nota1 >= 0 && nota2 < 11 && nota2 >= 0){
                media = (nota1 + nota2) / 2;

                printf("\n O calculo da media e: (%.1f + %.1f) / 2\n", nota1, nota2);
                printf(" Sua media foi: %.1f.\n", media);
            } else{
                printf("\n Notas fora do limite!\n");
            }

            
            printf("============================\n");
        break;

        case 2:
            printf("\n== Verificador de Presenca ==\n");

            printf(" Digite sua frequencia em %%: ");
            scanf("%f", &presenca);
            
            if(presenca >= 75 && presenca <= 100){
                printf("\n Voce nao tem pendencia na presenca.\n");
                printf(" Sua presenca (%.1f%%) e maior ou igual a 75%%.\n", presenca);
            } else if(presenca >= 0 && presenca < 75){
                printf("\n Voce tem pendencia na presenca.\n");
                printf(" Sua presenca (%.1f%%) e menor que 75%%.\n", presenca);
            } else{
                printf("O valor de frequencia e invalido!\n");
            }
            
            printf("============================\n");
        break;

        default:
            printf("Valor invalido! Reinicie o programa.");
        break;
    }

    return 0;
}