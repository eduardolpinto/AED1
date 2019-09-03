#include <stdio.h>
#include <stdlib.h>
int libera = 0;
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
                libera=3;
                free(ini);
                void adiciona(cad *ini);
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
    cad *novo;
    int lixo;
    novo=(cad*)malloc(sizeof(cad));
    printf("Nome: ");
    scanf("%d", &lixo);
    fflush(stdin);
    fgets(novo->nome,20,stdin);
    printf("Dia/Mes/Ano: ");
    scanf("%d %d %d", &novo->dia, &novo->mes, &novo->ano);
    printf("CPF: ");
    scanf("%ld", &novo->cpf);
    novo->prox=ini->prox;
    ini->prox=novo;
    if(libera==3)
        free(novo);
}
void imprime(cad *ini){
    cad *aux;
    aux=ini->prox;
    while(aux!=NULL){
        printf("Nome: %s", aux->nome);
        printf("Datade nasicmento: %d/%d/%d", aux->dia, aux->mes, aux->ano);
        printf("\nCPF: %ld\n", aux->cpf);
        aux=aux->prox;
    } 
}