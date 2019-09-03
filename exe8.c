#include <stdio.h>
#include <stdlib.h>
int *uniao(int *v1, int *v2, int n1, int n2);
int main(){
    int *v1, *v2, n1, n2, *v3,i;
    printf("tamanho v1: ");
    scanf("%d", &n1);
    printf("tamanho v2: ");
    scanf("%d", &n2);
    v1=(int*)malloc(n1*sizeof(int));
    v2=(int*)malloc(n2*sizeof(int));
    v3=uniao(v1,v2,n1,n2);
    for(i=0;i<n1+n2;i++){
        printf("vetor3[%d] = %d\n", i, *v3);
        v3++;    
    }
    return 0;
}
int *uniao(int *v1, int *v2, int n1, int n2){
    int *v3, i,*ini, *res;
    ini=v1;
    v3=(int*)malloc((n1+n2)*sizeof(int));
    printf("valores vetor1: ");
    for(i=0;i<n1;i++){
        printf("veto1[%d]= ", i);
        scanf("%d", v1);
        v1++;
    }
    v1=ini;
    ini=v2;
    printf("valores vetor2: ");
        for(i=0;i<n2;i++){
        printf("veto2[%d]= ", i);
        scanf("%d", v2);
        v2++;
    }
    v2=ini;
    i=0;
    while(i<n1){
        v3=v1;
         if(i==0){
            res=v3;
        }
        v1++;
        i++;
        }
    i=0;
    while(i<n2){
        v3=v2;
        v2++;
        i++;
    }
    v3=res;
    return v3;
}