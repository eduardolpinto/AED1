#include <stdio.h>
#include <stdlib.h>
int *recebe(int *p1,int n);
int main(){
    int n,*p1,i;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    p1=(int*)malloc(n*sizeof(int));
    if(p1==NULL){
        printf("IMPOSSIVEL ALOCAR MEMORIA!\n");
        exit(p1==NULL);
    }
    p1=recebe(p1,n);
    for(i=0;i<n;i++){
        printf("%d\n", *p1);
        p1++;
    }
    return 0;
}
int *recebe(int *p1,int n){
    int *ini,i;
    ini=p1;
    for(i=0;i<n;i++){
        printf("Vetor[%d]= \n", i);
        scanf("%d", p1);
        p1++;
    }
    return ini;
}