#include <stdio.h>

int esPrimo(int n){
    int i;
    for(i=2; i<n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int num;
    printf("=>");
    scanf("%d",&num);

    if(esPrimo(num)){
        printf("Es primo\n");
    }else{
        printf("No primo\n");
    }
    return 0;
}