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
        printf("vetor[%d]= %d\n",i, *p1);
        p1++;
    }
    free(p1);
    return 0;
}
int *recebe(int *p1,int n){
    int *ini,i;
    ini=p1;
    for(i=0;i<n;i++){
        printf("Vetor[%d]= ", i);
        scanf("%d", p1);
        p1++;
    }
    return ini;
}