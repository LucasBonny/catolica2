#include <stdio.h>
//operadores lógicos &&=e ||=ou !=oContrário.

//return 0; fecha o codigo se a função não for executada corretamente.
//return 1; ele passa mesmo sem executar a função solicitada.
int main(){
    //variaveis declaradas:
    int n_Mat;
    int n_Por;
    int n_Fis;
    int nome;
    int media;
    //Informações do aluno:
    printf("Primeiro, Informe seu nome: ");
    scanf("%s", &nome);
    //Informações da nota de matemática:
    printf("\n\nCerto %s, guardei a informação, \nAgora preciso que voce informe a sua nota de Matemática: ", &nome);
    scanf("%d", &n_Mat);
    //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 1/3
    if(n_Mat > 10 || n_Mat < 0){
        printf("Erro 1/3, Insira um valor válido!");
        printf("\n\nTente novamente, informe a nota de Matemática: ");
        scanf("%d", &n_Mat);
        //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 2/3
        if(n_Mat > 10 || n_Mat < 0){
            printf("Erro 2/3, Insira um valor válido!");
            printf("\n\nTente novamente, informe a nota de Matemática: ");
            scanf("%d", &n_Mat);
            //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 3/3
            if(n_Mat > 10 || n_Mat < 0){
                printf("Erro 3/3, Insira um valor válido!");
                printf("\n\nTente novamente, informe a nota de Matemática: ");
                scanf("%d", &n_Mat);
                //Sem resutado, codigo encerrado!
                if(n_Mat > 10 || n_Mat < 0){
                    printf("Erro 3/3, Codigo fechado!");
                    return 0;
                }
            }
        }
    }
    printf("\nSua nota informada de Matemática foi %d.", n_Mat);
    //Informações da nota de português
    printf("\n\nCerto, agora informe a de Português: ");
    scanf("%d", &n_Por);
    //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 1/3
    if(n_Por > 10 || n_Por < 0){
        printf("Erro 1/3, Insira um valor válido!");
        printf("\n\nTente novamente, informe a nota de Português: ");
        scanf("%d", &n_Por);
        //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 2/3
        if(n_Por > 10 || n_Por < 0){
            printf("Erro 2/3, Insira um valor válido!");
            printf("\n\nTente novamente, informe a nota de Português: ");
            scanf("%d", &n_Por);
            //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 3/3
            if(n_Por > 10 || n_Por < 0){
                printf("Erro 3/3, Insira um valor válido!");
                printf("\n\nTente novamente, informe a nota de Português: ");
                scanf("%d", &n_Por);
                //Sem resutado, codigo encerrado!
                if(n_Por > 10 || n_Por < 0){
                    printf("Erro 3/3, Codigo fechado!");
                    return 0;
                }
            }
        }
    }
    printf("\nSua nota informada de Português foi %d.", n_Por);
    //Informações da nota de física
    printf("\n\nCerto, agora informe a de Física: ");
    scanf("%d", &n_Fis);
    //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 1/3
    if(n_Fis > 10 || n_Fis < 0){
        printf("Erro 1/3, Insira um valor válido!");
        printf("\n\nTente novamente, informe a nota de Matemática: ");
        scanf("%d", &n_Fis);
        //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 2/3
        if(n_Fis > 10 || n_Fis < 0){
            printf("Erro 2/3, Insira um valor válido!");
            printf("\n\nTente novamente, informe a nota de Matemática: ");
            scanf("%d", &n_Fis);
            //Se a nota for menor que 0 ou maior que 10 ele apresentará um erro! 3/3
            if(n_Fis > 10 || n_Fis < 0){
                printf("Erro 3/3, Insira um valor válido!");
                printf("\n\nTente novamente, informe a nota de Matemática: ");
                scanf("%d", &n_Fis);
                //Sem resutado, codigo encerrado!
                if(n_Fis > 10 || n_Fis < 0){
                    printf("Erro 3/3, Codigo fechado!");
                    return 0;
                }
            }
        }
    }
    printf("\nSua nota informada de Física foi %d.", n_Fis);
    //Verificando a média
    media = (n_Mat + n_Por + n_Fis) / 3;
    printf("\n\nSua média é: %d\n\n", media);
    //se a média for menor que 7
    if(media < 7){
        printf("\nSegundo sua média, você não recebeu o bônus em suas matérias! :/");   
        printf("\nSua nota segue exatamente como informado!"); 
        printf("\n\nSuas Notas Sr(a) %s :\n", &nome);
        printf("\nMatemática: %d ",n_Mat);
        printf("\nPortuguês: %d ",n_Por);
        printf("\nFísica: %d ",n_Fis);
        printf("\n\nObrigado por estudar em nossa universidade!");
    }
    //verifica se as notas 
    else if(media <= 9){
        n_Mat = n_Mat + 1;
        n_Por = n_Por + 1;
        n_Fis = n_Fis + 1;
        printf("\nFoi aplicado um bônus em suas matérias.\n");
        printf("\nParabéns!");
        if(n_Mat >= 10) {
            n_Mat = 10;
        }
        if(n_Por >= 10) {
            n_Por = 10;
        }
        if(n_Fis >= 10){
           n_Fis = 10; 
        } 
        printf("\n\nSuas Notas Sr(a) %s :\n", &nome);
        printf("\nMatemática: %d ",n_Mat);
        printf("\nPortuguês: %d ",n_Por);
        printf("\nFísica: %d ",n_Fis);
        printf("\n\nObrigado por estudar em nossa universidade!");
    }
    else{
        n_Mat = 10;
        n_Por = 10;
        n_Fis = 10;
        printf("\nFoi aplicado um bônus em suas matérias.");
        printf("\nParabéns!"); 
        printf("\n\nSuas Notas Sr(a) %s :\n", &nome);
        printf("\nMatemática: %d ",n_Mat);
        printf("\nPortuguês: %d ",n_Por);
        printf("\nFísica: %d ",n_Fis);
        printf("\n\nObrigado por estudar em nossa universidade!");
    }
    
    return 0;
}
