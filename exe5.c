#include <stdio.h>
#include <stdlib.h>
struct cadastro{
    char nome[10];
    int dia, mes, ano;
    long int cpf;
    struct cadastro *prox;
};
typedef struct cadastro cad;
cad *criaLista();
void adiciona(cad *ini);
void imprime(cad *ini);
int main(){
    cad *ini;
    ini=criaLista();
    int menu=0;
    while(menu!=4){
        printf("Digite a opção desejada: ");
        scanf("%d", &menu);    
        switch(menu){
            case 1:
                adiciona(ini);
                break;
            case 2:
                imprime(ini);
                break;
            case 3:
                free(ini);
                menu=4;        
        }
    }            
    return 0;
}
cad *criaLista(){
    cad *start;
    start=(cad*)malloc(sizeof(cad));
    if(start==NULL){
        printf("IMPOSSIVEL ALOCAR MEMÓRIA!");
        exit(start==NULL);
    }
    return start;
}
void adiciona(cad *ini){
    cad *aux;
    int lixo;
    aux=ini->proxdd;
    printf("Nome: ");
    scanf("%d", &lixo);
    fgets(ini->nome,20,stdin);
    printf("Dia/Mes/Ano: ");
    scanf("%d %d %d", &ini->dia, &ini->mes, &ini->ano);
    printf("CPF: ");
    scanf("%ld", &ini->cpf);
    ini=aux;
}
void imprime(cad *ini){
    cad *aux;
    aux=ini;
    while(ini->prox!=NULL){
        printf("Nome: %s", ini->nome);
        printf("Datade nasicmento: %d/%d/%d", ini->dia, ini->mes, ini->ano);
        printf("\nCPF: %ld\n", ini->cpf);
        ini=ini->prox;
    }
    ini=aux;    
}